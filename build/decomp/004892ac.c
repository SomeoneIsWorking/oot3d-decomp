// OoT3D decomp @ 004892ac  name=FUN_004892ac  size=152

void FUN_004892ac(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_38 [48];

  fVar2 = (float)param_2[3] * DAT_00489344;
  FUN_0033a754(fVar2,fVar2,fVar2,*param_2,param_2[1],param_2[2],auStack_38,0,0);
  if (((*DAT_00489348 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00489348), iVar1 != 0)) {
    FUN_0036788c(DAT_0048934c);
  }
  FUN_0033a638(DAT_00489358,0,auStack_38,param_3);
  return;
}
