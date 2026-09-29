// OoT3D decomp @ 003abfb8  name=FUN_003abfb8  size=136

void FUN_003abfb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_003ac040;
  FUN_0036e168(DAT_003ac040,DAT_003ac048,DAT_003ac044,DAT_003ac040,param_1 + 0x6c);
  FUN_0035fb14(param_1);
  FUN_0036e168(uVar1,DAT_003ac050,DAT_003ac04c,uVar1,param_1 + 0x204);
  iVar2 = DAT_003ac05c;
  *(float *)(param_1 + 0xcc) = DAT_003ac054 * *(float *)(param_1 + 0x204) * DAT_003ac058;
  if ((int)*(float *)(param_1 + 0x204) <= iVar2) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
