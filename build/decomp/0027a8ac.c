// OoT3D decomp @ 0027a8ac  name=FUN_0027a8ac  size=300

void FUN_0027a8ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;

  FUN_003510b0(param_1,DAT_0027a9d8);
  *(uint *)(param_1 + 0x1c0) = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,param_1 + 0x1c8,1,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    local_10 = FUN_00353fd4(param_1,param_2,0);
    if (*(int *)(DAT_0027a9dc + 4) != 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0027a9e0;
      goto LAB_0027a9b4;
    }
  }
  else {
    local_10 = FUN_00353fd4(param_1,param_2,1);
    iVar1 = FUN_0036e864(param_2,*(undefined4 *)(param_1 + 0x1c0));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0027a9e4;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      goto LAB_0027a9b4;
    }
  }
  FUN_00374428(param_1);
LAB_0027a9b4:
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_10);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}
