// OoT3D decomp @ 001520b0  name=FUN_001520b0  size=120

void FUN_001520b0(int param_1,undefined4 param_2)

{
  int iVar1;

  if (*(short *)(param_1 + 0xd88) == 2) {
    FUN_003715d0(param_1,param_2,1,0x20);
    iVar1 = DAT_00152128;
    *(ushort *)(DAT_00152128 + 0x8a) = *(ushort *)(DAT_00152128 + 0x8a) & 0xfff0 | 0x8001;
    *(ushort *)(iVar1 + -0x5dc) = *(ushort *)(iVar1 + -0x5dc) & 0xfffb;
    FUN_00354358(DAT_0015212c);
    FUN_00371680(param_2,0);
    *(undefined2 *)(param_1 + 0xd88) = 0;
  }
  return;
}
