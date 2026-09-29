// OoT3D decomp @ 0040580c  name=FUN_0040580c  size=64

void FUN_0040580c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;

  iVar1 = *param_2;
  bVar2 = iVar1 == DAT_0040584c;
  if (bVar2) {
    iVar1 = param_2[2];
  }
  if (bVar2 && iVar1 == 0x2000000) {
    *param_1 = param_2;
    iVar1 = FUN_0030a5b4(param_2);
    param_1[1] = (int)param_2 + iVar1 + 8;
  }
  return;
}
