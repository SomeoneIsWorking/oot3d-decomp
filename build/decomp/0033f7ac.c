// OoT3D decomp @ 0033f7ac  name=FUN_0033f7ac  size=144

void FUN_0033f7ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  
  FUN_003518cc();
  FUN_0036055c(param_3,param_1);
  iVar2 = FUN_003518cc(param_1);
  fVar1 = DAT_0033f858;
  if (iVar2 != 0) {
    *(undefined2 *)(DAT_0033f850 + param_1) = 1;
  }
  FUN_00358dfc(*(float *)(DAT_0033f854 + 0x2c) * fVar1 * DAT_0033f85c,param_1 + 0x254,param_3,
               param_2);
  return;
}

