// OoT3D decomp @ 0023c07c  name=FUN_0023c07c  size=176

void FUN_0023c07c(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  undefined4 local_14;

  if (*param_2 == '\0') {
    uVar2 = DAT_0023c12c;
    if ((3 < *(int *)(DAT_0023c130 + 0x4e8)) ||
       ((*(int *)(DAT_0023c134 + 4) == 0 && ((*(ushort *)(DAT_0023c138 + 0xf8) & 0x200) == 0)))) {
      uVar2 = DAT_0023c13c;
    }
    if (*(int *)(DAT_0023c130 + 0x4e8) == 5) {
      uVar2 = DAT_0023c12c;
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 0x10);
    FUN_00331094(iVar1,0x14,4,auStack_20);
    local_14 = uVar2;
    FUN_003688a8(iVar1,0x14,4,auStack_20);
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0x16de) = 1;
  }
  return;
}
