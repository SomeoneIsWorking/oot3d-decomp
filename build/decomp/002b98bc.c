// OoT3D decomp @ 002b98bc  name=FUN_002b98bc  size=408

void FUN_002b98bc(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;

  iVar4 = DAT_002b9a58;
  if (*(int *)(DAT_002b9a54 + param_2) != DAT_002b9a58) {
    FUN_0036b0fc(param_1,param_2);
    FUN_0036055c(param_1,param_2,DAT_002b9a5c,0);
    iVar3 = FUN_003518cc(param_2);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = 2;
    }
    iVar3 = FUN_0035d260(param_2);
    FUN_00358dfc(DAT_002b9a64,param_2 + 0x254,param_1,
                 *(undefined4 *)(DAT_002b9a60 + (iVar3 + iVar4) * 4));
    iVar4 = extraout_r1;
  }
  *(undefined4 *)(param_2 + 0x221c) = DAT_002b9a68;
  if (*(char *)(param_2 + 0x1a9) == '\x06') {
    if (*(int *)(param_2 + 0x2244) < 0x3f000001) {
      return;
    }
    if (*(char *)((uint)*DAT_002b9a6c + DAT_002b9a70) == '\0') {
      return;
    }
    FUN_002b9888(param_1,param_2 + 0x23e8,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
    *(undefined4 *)(param_2 + 0x2244) = DAT_002b9a74;
    FUN_00355830(0,0xffffffff);
    FUN_0034d688(param_1,param_2,0xff);
    uVar2 = DAT_002b9a78;
    *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x800;
    FUN_0036f59c(param_2,uVar2);
    iVar4 = extraout_r1_00;
  }
  cVar1 = *(char *)(param_2 + 0x1a9);
  bVar5 = cVar1 == '\x05';
  if (bVar5) {
    cVar1 = *(char *)(DAT_002b9a7c + 0x52);
    iVar4 = DAT_002b9a7c;
  }
  if ((bVar5 && cVar1 == '\0') && (*(ushort *)(iVar4 + 0x4a) != 0)) {
    fVar6 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(iVar4 + 0x4a),(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorFloatToUnsigned(fVar6 - DAT_002b9a80,3);
    *(short *)(iVar4 + 0x4a) = (short)uVar7;
    if ((uVar7 & 0xffff) == 0) {
      FUN_002b9888(param_1,param_2 + 0x23e8,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
      FUN_00369128(param_1);
      FUN_0036f59c(param_2,DAT_002b9a84);
      return;
    }
  }
  return;
}
