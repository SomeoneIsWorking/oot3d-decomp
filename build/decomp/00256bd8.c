// OoT3D decomp @ 00256bd8  name=FUN_00256bd8  size=152

undefined4 FUN_00256bd8(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = UNK_00256c70;
  psVar3 = (short *)(*(int *)(param_3 + 4) + param_1 +
                    (uint)*(byte *)(*(int *)(param_2 + 0x5c18) +
                                   (uint)*(byte *)(param_2 + 0x5c02) * 2) * 0x10);
  *(short **)(param_2 + 0x5c0c) = psVar3;
  iVar4 = *(int *)(iVar2 + 4);
  *(char *)(param_2 + 0x5c00) = (char)iVar4;
  uVar5 = (uint)*(ushort *)(param_2 + 0x104);
  bVar6 = uVar5 == 0x6b;
  if (bVar6) {
    uVar5 = *(int *)(iVar2 + 8) - 0xff00;
  }
  if (bVar6 && uVar5 == 0xf3) {
    sVar1 = *(short *)(UNK_00256c74 + 4);
  }
  else {
    sVar1 = *(short *)(UNK_00256c74 + iVar4 * 2);
  }
  *(short *)(*(int *)(UNK_00256c78 + *psVar3 * 0x20 + 0x14) + 8) = sVar1;
  FUN_0032e21c((undefined1 *)(param_2 + 0x3a58),(int)sVar1,param_2);
  *(undefined1 *)(param_2 + 0x3a59) = *(undefined1 *)(param_2 + 0x3a58);
  return 1;
}

