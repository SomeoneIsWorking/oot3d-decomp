// OoT3D decomp @ 0019088c  name=FUN_0019088c  size=228

/* WARNING: Removing unreachable block (ram,0x001908e0) */

void FUN_0019088c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    if ((*(ushort *)(DAT_00190970 + 0x26) & 0x40) == 0) {
      *(ushort *)(DAT_00190970 + 0x26) = *(ushort *)(DAT_00190970 + 0x26) | 0x40;
    }
    *(short *)(param_1 + 2000) = (short)DAT_00190978;
    FUN_0035e580(param_2,*(undefined4 *)(param_2 + 0x20ac),0x14,0x1e);
    FUN_00376a60(0x32);
    iVar1 = DAT_0019097c;
    iVar2 = *(int *)(DAT_0019097c + 0xed4) + 100;
    *(int *)(DAT_0019097c + 0xed4) = iVar2;
    if (iVar2 == 1000) {
      *(undefined1 *)(*(int *)(param_2 + 0x20ac) + 0x172b) = 0;
      *(short *)(param_1 + 2000) = (short)DAT_00190988;
      FUN_0036be34(param_2);
      uVar3 = DAT_0019098c;
    }
    else {
      if (DAT_00190980 < iVar2) {
        iVar2 = DAT_00190980;
      }
      *(int *)(iVar1 + 0xed4) = iVar2;
      uVar3 = DAT_00190984;
    }
    *(undefined4 *)(param_1 + 0x650) = uVar3;
  }
  return;
}
