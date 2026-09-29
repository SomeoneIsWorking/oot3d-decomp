// OoT3D decomp @ 001f90d4  name=FUN_001f90d4  size=1120

void FUN_001f90d4(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  short sVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];

  uVar10 = DAT_001f9414;
  cVar7 = '\0';
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1a4) = uVar1 >> 8;
  if (*(short *)(param_1 + 0x18) == 0) {
    if ((((uint)uVar1 << 0x10) >> 0x18 & 0x80) != 0) {
      *(undefined2 *)(param_1 + 0x1a4) = 0xffff;
    }
  }
  else {
    *(ushort *)(param_1 + 0x18) = uVar1 >> 8 | (ushort)((int)*(short *)(param_1 + 0x18) << 8);
    *(undefined2 *)(param_1 + 0x1a4) = 0xffff;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
  }
  if (*(short *)(param_2 + 0x104) == 0x52) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  *(uint *)(param_1 + 0x208) = *(ushort *)(param_1 + 0x1c) & 0x80;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x7f;
  FUN_003510b0(param_1,DAT_001f9418);
  if (*(short *)(param_1 + 0x1c) < 0xb) {
    FUN_00353dd0(param_2,param_1 + 0x1b0);
    FUN_00353d24(param_2,param_1 + 0x1b0,param_1,DAT_001f941c);
  }
  uVar3 = DAT_001f9448;
  uVar14 = DAT_001f9438;
  uVar2 = DAT_001f9420;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 2:
    *(undefined4 *)(param_1 + 0xfc) = DAT_001f9424;
    *(undefined4 *)(param_1 + 0x100) = DAT_001f943c;
    *(undefined4 *)(param_1 + 0x104) = DAT_001f9440;
    goto LAB_001f92d4;
  case 3:
  case 6:
  case 8:
  case 0xd:
  case 0x13:
    cVar7 = '\x01';
  case 4:
  case 7:
  case 9:
  case 0xe:
  case 0x14:
    cVar7 = cVar7 + '\x01';
  case 1:
  case 5:
  case 10:
  case 0xb:
  case 0x11:
    *(undefined4 *)(param_1 + 0xfc) = DAT_001f9424;
    *(undefined4 *)(param_1 + 0x100) = DAT_001f9430;
    *(undefined4 *)(param_1 + 0x104) = DAT_001f9434;
    break;
  case 0xf:
  case 0x15:
    cVar7 = '\x01';
  case 0x10:
  case 0x16:
    cVar7 = cVar7 + '\x01';
  case 0:
  case 0xc:
  case 0x12:
    *(undefined4 *)(param_1 + 0xfc) = DAT_001f9424;
    *(undefined4 *)(param_1 + 0x100) = DAT_001f9428;
    *(undefined4 *)(param_1 + 0x104) = DAT_001f942c;
    uVar10 = uVar2;
    break;
  case 0x17:
  case 0x18:
    *(undefined1 *)(param_1 + 0x1a6) = 0x4b;
    uVar10 = FUN_003738a8(uVar3);
    *(undefined4 *)(param_1 + 0x60) = uVar10;
    uVar10 = FUN_003738a8(uVar3);
    *(undefined4 *)(param_1 + 0x68) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  sVar9 = *(short *)(param_1 + 0x1c);
  uVar14 = uVar10;
  if (sVar9 < 5) {
LAB_001f92d4:
    *(undefined1 *)(param_1 + 0x1ac) = 0;
    uVar10 = uVar14;
  }
  else if (sVar9 < 10) {
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    if (*(int *)(param_1 + 0x208) != 0) {
      *(undefined1 *)(param_1 + 0x1ac) = 7;
    }
  }
  else {
    if (sVar9 < 0xb) {
      uVar5 = 2;
    }
    else if (sVar9 < 0x11) {
      uVar5 = 3;
    }
    else if (sVar9 < 0x18) {
      uVar5 = 4;
    }
    else {
      uVar5 = 5;
    }
    *(undefined1 *)(param_1 + 0x1ac) = uVar5;
  }
  FUN_0037572c(uVar10,param_1);
  uVar2 = DAT_001f9458;
  uVar10 = DAT_001f9454;
  if (((*(short *)(param_1 + 0x1c) == 2) && (0x1f < *(short *)(param_2 + 0x104))) &&
     (*(short *)(param_2 + 0x104) < 0x23)) {
    *(undefined4 *)(param_1 + 0x54) = DAT_001f9454;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar10;
  }
  *(char *)(param_1 + 0x1ab) = cVar7;
  if (cVar7 != '\0') {
    sVar9 = 0;
    if (*(short *)(param_1 + 0x1c) == 0xf) {
      sVar9 = 0x4000;
    }
    if (cVar7 == '\x02') {
      *(byte *)(param_1 + 0x1ac) =
           *(byte *)(param_1 + 0x1ac) | (char)*(undefined2 *)(param_1 + 0x1a4) << 4;
      FUN_0034e6d0(param_1,param_2);
      iVar6 = DAT_001f945c;
      uVar10 = FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + *(short *)(DAT_001f945c + 10)
                                        + sVar9));
      *(undefined4 *)(iVar6 + -0x78) = uVar10;
      fVar11 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + *(short *)(iVar6 + 10)
                                               + sVar9));
      *(float *)(iVar6 + -0x74) = fVar11;
      fVar13 = *(float *)(iVar6 + -4);
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar11 * fVar13;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(iVar6 + -0x78) * fVar13;
    }
    else {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_001f95f4;
    uVar12 = FUN_0036e81c(param_2 + 0xa98,auStack_28,auStack_2c,param_1,param_1 + 0x28);
    if (DAT_001f95f8 <= uVar12) {
      FUN_00374428();
      return;
    }
    *(uint *)(param_1 + 0x2c) = uVar12;
  }
  puVar4 = DAT_001f95fc;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if (((*puVar4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_001f95fc), iVar6 != 0)) {
    FUN_0036788c(DAT_001f9600);
  }
  piVar8 = *(int **)(DAT_001f9600 + 0x17c);
  piVar8[2] = *(int *)(param_1 + 0x178);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001f960c + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(short *)(param_1 + 0x1c) == 0x17 || *(short *)(param_1 + 0x1c) == 0x18) {
    uVar10 = ObjectBankArchive_00358ef8(param_2 + 0x10,0xd);
    uVar10 = (**(code **)(*piVar8 + 8))(piVar8,uVar10,1);
    *(undefined4 *)(param_1 + 0x20c) = uVar10;
  }
  else {
    uVar10 = ObjectBankArchive_00358ef8
                       (param_2 + 0x10,
                        *(undefined4 *)(DAT_001f9610 + (*(byte *)(param_1 + 0x1ac) & 0xf) * 4));
    uVar10 = (**(code **)(*piVar8 + 8))(piVar8,uVar10,1);
    *(undefined4 *)(param_1 + 0x210) = uVar10;
  }
  uVar10 = DAT_001f9614;
  piVar8[2] = 0;
  FUN_00372d4c(uVar10,uVar10,param_1 + 0xbc,0);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  return;
}
