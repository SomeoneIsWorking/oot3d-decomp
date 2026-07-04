// OoT3D decomp @ 00256ca8  name=FUN_00256ca8  size=144

undefined4 FUN_00256ca8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  *(ushort *)(*piRam00256d38 + 0x4b2) = (ushort)*(byte *)(param_3 + 1);
  iVar1 = iRam00256d3c;
  *(short *)(iRam00256d3c + 0xae) = (short)*(undefined4 *)(param_3 + 4);
  if ((*(short *)(param_2 + 0x104) == 0x2c || *(short *)(param_2 + 0x104) == 0x42) &&
     (*(int *)(iVar1 + -0x14fc) == 0)) {
    *(undefined2 *)(iVar1 + 0xae) = 1;
  }
  uVar2 = (int)*(short *)(param_2 + 0x104) - 0x51;
  bVar4 = 0x12 < uVar2;
  bVar3 = uVar2 == 0x13;
  if (0x13 < uVar2) {
    uVar2 = (int)*(short *)(param_2 + 0x104) - 0x1b;
    bVar4 = 9 < uVar2;
    bVar3 = uVar2 == 10;
  }
  if ((!bVar4 || bVar3) && (*(int *)(iVar1 + -0x14f8) < iRam00256d40)) {
    *(uint *)(iVar1 + -0x5b0) =
         *(uint *)(iRam00256d44 + *(short *)(iVar1 + 0xae) * 4) | *(uint *)(iVar1 + -0x5b0);
  }
  return 1;
}

