// OoT3D decomp @ 00151fe4  name=FUN_00151fe4  size=196

void FUN_00151fe4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;

  if (*(short *)(param_1 + 0xd88) == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
  }
  else {
    if ((*(short *)(param_1 + 0x464) != 0) &&
       (sVar1 = *(short *)(param_1 + 0x464) + -1, *(short *)(param_1 + 0x464) = sVar1, sVar1 == 0))
    {
      FUN_00375bcc(param_1,DAT_001520a8);
    }
    if (*(short *)(param_1 + 0xd88) == 2) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
      FUN_003715d0(param_1,param_2,2,0x26);
      iVar2 = DAT_001520ac;
      *(ushort *)(DAT_001520ac + 0x8a) = *(ushort *)(DAT_001520ac + 0x8a) & 0xfff0 | 0x8002;
      FUN_00371680(param_2,0);
      *(undefined2 *)(param_1 + 0xd88) = 0;
      *(ushort *)(iVar2 + 0x8a) = *(ushort *)(iVar2 + 0x8a) | 0x40;
    }
  }
  return;
}
