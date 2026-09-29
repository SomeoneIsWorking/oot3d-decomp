// OoT3D decomp @ 003bf214  name=FUN_003bf214  size=232

void FUN_003bf214(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;

  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d;
  if ((uVar1 == 4) && (*(int *)(param_1 + 0x124) != 0)) {
    *(short *)(*(int *)(param_1 + 0x124) + 0x118) = (short)DAT_003bf2fc;
  }
  if ((*(byte *)(param_1 + 0x1d1) & 2) != 0) {
    *(byte *)(param_1 + 0x1d1) = *(byte *)(param_1 + 0x1d1) & 0xfd;
    if ((*(short **)(param_1 + 0x1c8) != (short *)0x0) && (**(short **)(param_1 + 0x1c8) == 0xf0)) {
      if ((uVar1 == 4) && (*(int *)(param_1 + 0x124) != 0)) {
        *(undefined2 *)(*(int *)(param_1 + 0x124) + 0x118) = 0x4b;
      }
      *(undefined4 *)(param_1 + 0x1bc) = DAT_003bf300;
      *(undefined2 *)(param_1 + 0x270) = 0xff;
      FUN_00375bcc(param_1,DAT_003bf304);
    }
  }
  iVar2 = param_2 + 0x5c78;
  if (uVar1 < 2 || uVar1 == 4) {
    FUN_003762a4(param_2,iVar2,param_1 + 0x1c0);
    FUN_00376168(param_2,iVar2,param_1 + 0x218);
  }
  FUN_00376168(param_2,iVar2,param_1 + 0x1c0);
  return;
}
