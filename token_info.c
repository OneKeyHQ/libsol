#include "spl_token_instruction.h"
#include "token_info.h"
#include "util.h"

struct token_info {
    const Pubkey* mint_address;
    const char* symbol;
};

const struct token_info token_infos[] = {
    {&spl_token_usdt_mint_address, "USDT"},
    {&spl_token_usdc_mint_address, "USDC"},
    {&spl_token_jup_mint_address, "JUP"},
    {&spl_token_ray_mint_address, "RAY"},
    {&spl_token_bonk_mint_address, "Bonk"},
    {&spl_token_wbtc_mint_address, "WBTC"},
    {&spl_token_link_mint_address, "LINK"},
    {&spl_token_usde_mint_address, "USDe"},
    {&spl_token_usds_mint_address, "USDS"},
    {&spl_token_cbbtc_mint_address, "cbBTC"},
    {&spl_token_susde_mint_address, "sUSDe"},
    {&spl_token_wlfi_mint_address, "WLFI"},
    {&spl_token_usd1_mint_address, "USD1"},
    {&spl_token_pyusd_mint_address, "PYUSD"},
    {&spl_token_jitosol_mint_address, "JitoSOL"},
    {&spl_token_wsol_mint_address, "wSOL"},
    {&spl_token_jlp_mint_address, "JLP"},
    {&spl_token_bnsol_mint_address, "BNSOL"},
    {&spl_token_trump_mint_address, "TRUMP"},
    {&spl_token_pump_mint_address, "PUMP"},
    {&spl_token_syrupusdc_mint_address, "syrupUSDC"},
    {&spl_token_lbtc_mint_address, "LBTC"},
    {&spl_token_pengu_mint_address, "PENGU"},
    {&spl_token_render_mint_address, "RENDER"},
    {&spl_token_solvbtc_mint_address, "SolvBTC"},
    {&spl_token_fdusd_mint_address, "FDUSD"},
    {&spl_token_usdg_mint_address, "USDG"},
    {&spl_token_virtual_mint_address, "VIRTUAL"},
    {&spl_token_jupsol_mint_address, "JupSOL"},
    {&spl_token_spx_mint_address, "SPX"},
    {&spl_token_cake_mint_address, "Cake"},
    {&spl_token_ousg_mint_address, "OUSG"},
    {&spl_token_msol_mint_address, "mSOL"},
    {&spl_token_usdy_mint_address, "USDY"},
    {&spl_token_tbtc_mint_address, "tBTC"},
    {&spl_token_2z_mint_address, "2Z"},
    {&spl_token_pyth_mint_address, "PYTH"},
    {&spl_token_wif_mint_address, "$WIF"},
    {&spl_token_hnt_mint_address, "HNT"},
    {&spl_token_borg_mint_address, "BORG"},
    {&spl_token_ath_mint_address, "ATH"},
    {&spl_token_axyc_mint_address, "AXYC"},
    {&spl_token_jto_mint_address, "JTO"},
    {&spl_token_zbcn_mint_address, "ZBCN"},
    {&spl_token_fluid_mint_address, "FLUID"},
    {&spl_token_bbsol_mint_address, "bbSOL"},
    {&spl_token_fartcoin_mint_address, "Fartcoin"},
    {&spl_token_lion_mint_address, "LION"},
    {&spl_token_dsol_mint_address, "dSOL"},
    {&spl_token_w_mint_address, "W"},
};

const char* get_token_symbol(const Pubkey* mint_address) {
    size_t i;
    for (i = 0; i < ARRAY_LEN(token_infos); i++) {
        const struct token_info* ti = &token_infos[i];
        if (memcmp(ti->mint_address, mint_address, PUBKEY_SIZE) == 0) {
            return ti->symbol;
        }
    }
    return "UNKN";
}
