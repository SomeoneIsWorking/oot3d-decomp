// OoT3D decomp @ 0010a8e4  name=FUN_0010a8e4  size=164

void FUN_0010a8e4(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if ((((*(short *)(param_1 + 0x8b4) == 0) && (iVar1 = FUN_003769d8(param_2 + 0x28a0), iVar1 == 5))
      && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) &&
     (FUN_003725e0(param_2), *(short *)(param_1 + 0x8b4) == 0)) {
    *(ushort *)(DAT_0010a988 + 0xf4) = *(ushort *)(DAT_0010a988 + 0xf4) | 0x4000;
    FUN_003716f0(param_2,DAT_0010a98c,0x14,0x2e);
    iVar1 = DAT_0010a990;
    *(undefined2 *)(param_1 + 0x8b4) = 1;
    *(undefined4 *)(iVar1 + param_2) = 0;
    *(undefined1 *)(DAT_0010a994 + 0x5ab) = 0x2e;
  }
  return;
}
