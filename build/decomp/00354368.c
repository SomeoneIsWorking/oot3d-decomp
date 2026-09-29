// OoT3D decomp @ 00354368  name=FUN_00354368  size=300

void FUN_00354368(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  int iVar9;
  uint in_fpscr;

  uVar4 = FUN_00363c10(param_2 + 0x3a58,0x17c);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  uVar5 = FUN_0036ae14(param_1 + 0x1a8,0x15);
  uVar4 = DAT_00354494;
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xaf8) = uVar5;
  FUN_00374a58(uVar4,param_1 + 0x1a8,0x15);
  psVar3 = DAT_00354498;
  *(undefined2 *)(param_1 + 0xae2) = 0x71;
  iVar6 = *(int *)(psVar3 + 0x22);
  puVar8 = (ushort *)(param_1 + 0xe60);
  iVar9 = 7;
  *(undefined4 *)(iVar6 + 0x1714) = uVar4;
  *(undefined4 *)(iVar6 + 0x1718) = uVar4;
  bVar1 = *(byte *)((int)psVar3 + 0xd5);
  pbVar7 = (byte *)(psVar3 + 0x6a);
  do {
    bVar2 = pbVar7[2];
    iVar9 = iVar9 + -1;
    puVar8[1] = (ushort)bVar1;
    bVar1 = pbVar7[3];
    puVar8 = puVar8 + 2;
    *puVar8 = (ushort)bVar2;
    pbVar7 = pbVar7 + 2;
  } while (iVar9 != 0);
  *(undefined2 *)(param_1 + 0xc1a) = 0x78;
  uVar5 = DAT_0035449c;
  *(undefined2 *)(param_1 + 0xc1c) = 0;
  *(undefined4 *)(param_1 + 0xe84) = uVar5;
  *(undefined4 *)(param_1 + 0xac0) = DAT_003544a0;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined2 *)(param_1 + 0xaee) = 0;
  *(undefined2 *)(param_1 + 0xad2) = 0x17;
  FUN_0036cb80(param_2,0xffffffff,(int)*psVar3,param_1 + 0x3c);
  FUN_0036cb80(param_2,0xffffffff,(int)*psVar3,param_1 + 0x3c);
  FUN_0036cb80(param_2,0xffffffff,(int)*psVar3,param_1 + 0x3c);
  FUN_0036cb80(param_2,0xffffffff,(int)*psVar3,param_1 + 0x3c);
  return;
}
