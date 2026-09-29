// OoT3D decomp @ 00206114  name=FUN_00206114  size=192

void FUN_00206114(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(DAT_002061d4 + param_2);
  FUN_0036e980(param_2,0,7);
  iVar3 = *(int *)(DAT_002061dc + *(short *)(DAT_002061d8 + param_1) * 4);
  *(int *)(param_1 + 0x1b8) = iVar3;
  if ((iVar3 == 0x33) &&
     (*(short *)(DAT_002061ec +
                 ((int)(*(uint *)(DAT_002061e0 + 0xb8) & *(uint *)(DAT_002061e4 + 4)) >>
                 *(sbyte *)(DAT_002061e8 + 1)) * 2 + 8) == 0x1e)) {
    *(undefined4 *)(param_1 + 0x1b8) = 0x34;
  }
  uVar2 = DAT_002061f4;
  uVar1 = DAT_002061f0;
  *(uint *)(iVar4 + 0x1710) = *(uint *)(iVar4 + 0x1710) & 0xdfffffff;
  *(undefined4 *)(param_1 + 0x124) = 0;
  FUN_003724dc(uVar2,uVar1,param_1,param_2,*(undefined4 *)(param_1 + 0x1b8));
  *(uint *)(iVar4 + 0x1710) = *(uint *)(iVar4 + 0x1710) | 0x20000000;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002061f8;
  return;
}
