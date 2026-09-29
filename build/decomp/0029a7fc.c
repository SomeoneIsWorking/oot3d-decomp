// OoT3D decomp @ 0029a7fc  name=FUN_0029a7fc  size=400

void FUN_0029a7fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;

  FUN_003510b0(param_1,DAT_0029a98c);
  *(undefined4 *)(param_1 + 0x200) = 0;
  uVar2 = DAT_0029a994;
  uVar1 = DAT_0029a990;
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) != 0) {
    if (uVar3 == 1) {
      FUN_00372f38(param_1,param_2,param_1 + 0x204,1,0);
      iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    }
    else {
      if (uVar3 != 2) {
        return;
      }
      FUN_00372f38(param_1,param_2,param_1 + 0x204,2,0);
      iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x200) = uVar2;
    return;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x204,9,0);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0029a998);
  *(undefined4 *)(param_1 + 0x200) = DAT_0029a99c;
  iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x140) = uVar1;
    return;
  }
  z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xb7,0,0,0,9,1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  FUN_00374428(param_1);
  return;
}
