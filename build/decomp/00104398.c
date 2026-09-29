// OoT3D decomp @ 00104398  name=FUN_00104398  size=76

void FUN_00104398(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = DAT_001043e8;
  if (*(byte *)(DAT_001043e4 + *(char *)(param_4 + 0x3ee)) == param_2) {
    uVar2 = *(undefined4 *)(param_4 + 0x1cc);
    FUN_0037266c(uVar2,*(undefined1 *)(DAT_001043e8 + *(char *)(param_4 + 0x3ee) * 2));
    FUN_0037266c(uVar2,*(undefined1 *)(iVar1 + *(char *)(param_4 + 0x3ee) * 2 + 1));
    return;
  }
  return;
}
