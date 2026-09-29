// OoT3D decomp @ 0014c184  name=FUN_0014c184  size=1272

void FUN_0014c184(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  uVar10 = *(uint *)(DAT_0014c67c + param_2);
  if ((*(byte *)(param_1 + 0x4d5) & 2) == 0) goto LAB_0014c460;
  *(byte *)(param_1 + 0x4d5) = *(byte *)(param_1 + 0x4d5) & 0xfd;
  puVar9 = *(undefined4 **)(param_1 + 0x500);
  local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4ea),(byte)(in_fpscr >> 0x15) & 3);
  local_2c = VectorSignedToFloat((int)*(short *)(param_1 + 0x4ec),(byte)(in_fpscr >> 0x15) & 3);
  local_28 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4ee),(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = *(int *)(param_1 + 0x4a0);
  iVar2 = DAT_0014c680;
  if (iVar5 != DAT_0014c680) {
    iVar2 = DAT_0014c684;
  }
  if (iVar5 == DAT_0014c680 || iVar5 == iVar2) goto LAB_0014c460;
  *(undefined2 *)(param_1 + 0x4b2) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  uVar4 = DAT_0014c68c;
  uVar3 = DAT_0014c688;
  bVar1 = *(byte *)(param_1 + 0xb9);
  if (bVar1 == 0xc) {
LAB_0014c250:
    if ((1 < *(byte *)(param_1 + 0xb7)) && (*(short *)(param_1 + 0x4b2) != 4)) {
      *(undefined2 *)(param_1 + 0x4b2) = 4;
      FUN_00375bcc(param_1,uVar3);
      FUN_00375ed8(param_1,0,0xff,0,0x50);
      *(undefined4 *)(param_1 + 0x4a0) = uVar4;
      FUN_003741e4(param_2,*puVar9,1,&local_30,0);
      goto LAB_0014c460;
    }
LAB_0014c2d4:
    if ((2 < *(byte *)(param_1 + 0xb7)) && (*(short *)(param_1 + 0x4b2) != 4)) {
      *(undefined2 *)(param_1 + 0x4b2) = 4;
      FUN_00375ed8(param_1,0,0xff,0,0x50);
      FUN_00375bcc(param_1,uVar3);
      *(undefined4 *)(param_1 + 0x4a0) = uVar4;
      FUN_003741e4(param_2,*puVar9,1,&local_30,0);
      goto LAB_0014c460;
    }
LAB_0014c344:
    *(undefined2 *)(param_1 + 0x4b0) = 6;
    FUN_00375eb8(param_1);
    if (*(char *)(param_1 + 0xb7) == '\0') {
      FUN_00375bcc(param_1,DAT_0014c690);
      FUN_00375b70(param_2,param_1);
      *(undefined4 *)(param_1 + 0x4a0) = DAT_0014c694;
    }
    else {
      if (*(int *)(param_1 + 0x4a0) == DAT_0014c698) {
        *(undefined2 *)(param_1 + 0xc0) = 0;
        *(undefined2 *)(param_1 + 0xbc) = 0;
      }
      FUN_00375bcc(param_1,DAT_0014c69c);
      *(undefined4 *)(param_1 + 0x4a0) = DAT_0014c6a0;
    }
  }
  else {
    if (0xc < bVar1) {
      if (bVar1 == 0xd) goto LAB_0014c2d4;
      if (bVar1 != 0xe) goto LAB_0014c460;
      goto LAB_0014c344;
    }
    if (bVar1 == 1) {
      if (*(short *)(param_1 + 0x4b2) != 4) {
        *(undefined2 *)(param_1 + 0x4b2) = 4;
        FUN_00375ed8(param_1,0,0xff,0,0x50);
        *(undefined4 *)(param_1 + 0x4a0) = uVar4;
        FUN_003741e4(param_2,*puVar9,1,&local_30,0);
      }
      goto LAB_0014c460;
    }
    if (bVar1 != 3) {
      if (bVar1 != 0xb) goto LAB_0014c460;
      goto LAB_0014c250;
    }
    FUN_00375eb8(param_1);
    *(undefined2 *)(param_1 + 0x4b0) = 2;
    *(undefined2 *)(param_1 + 0x4b2) = 2;
    FUN_00375ed8(param_1,0,0xff,0,0x50);
    *(undefined4 *)(param_1 + 0x4a0) = uVar4;
  }
  FUN_003741e4(param_2,*puVar9,0,&local_30,0);
LAB_0014c460:
  (**(code **)(param_1 + 0x4a0))(param_1,param_2);
  FUN_0037572c(*(undefined4 *)(param_1 + 0x4c0),param_1);
  fVar12 = DAT_0014c6a4;
  if ((uint)DAT_0014c6a4 < (uint)*(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xcc) = DAT_0014c6a8;
  }
  else {
    *(float *)(param_1 + 0xcc) = DAT_0014c6ac + *(float *)(param_1 + 0xc4) * DAT_0014c6b0;
  }
  if (*(short *)(param_1 + 0x4a4) != 0) {
    *(short *)(param_1 + 0x4a4) = *(short *)(param_1 + 0x4a4) + -1;
  }
  if (*(short *)(param_1 + 0x4a6) != 0) {
    *(short *)(param_1 + 0x4a6) = *(short *)(param_1 + 0x4a6) + -1;
  }
  if (*(short *)(param_1 + 0x4ac) != 0) {
    *(short *)(param_1 + 0x4ac) = *(short *)(param_1 + 0x4ac) + -1;
  }
  if (*(short *)(param_1 + 0x4a8) != 0) {
    *(short *)(param_1 + 0x4a8) = *(short *)(param_1 + 0x4a8) + -1;
  }
  if (*(short *)(param_1 + 0x4aa) != 0) {
    *(short *)(param_1 + 0x4aa) = *(short *)(param_1 + 0x4aa) + -1;
  }
  FUN_00376864(param_1);
  FUN_00376340(DAT_0014c6b8,DAT_0014c6b4,DAT_0014c6b4,param_2,param_1,0x1d);
  iVar5 = DAT_0014c6c0;
  iVar2 = DAT_0014c6bc;
  if (((*(byte *)(param_1 + 0x4d4) & 4) == 0) ||
     (*(byte *)(param_1 + 0x4d4) = *(byte *)(param_1 + 0x4d4) & 0xfb,
     *(int *)(param_1 + 0x4a0) != iVar2 && *(int *)(param_1 + 0x4a0) != iVar5)) {
    if ((*(byte *)(param_1 + 0x4d4) & 2) != 0) {
      *(byte *)(param_1 + 0x4d4) = *(byte *)(param_1 + 0x4d4) & 0xfd;
      uVar6 = *(uint *)(param_1 + 0x4c8);
      bVar11 = uVar6 == uVar10;
      if (bVar11) {
        uVar6 = (uint)*(ushort *)(param_1 + 0x4ae);
      }
      if ((bVar11 && uVar6 == 0) && (*(int *)(param_1 + 0x4a0) != DAT_0014c6cc)) {
        *(undefined4 *)(param_1 + 0x4a0) = DAT_0014c6d0;
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    if (*(short *)(param_1 + 0x4ae) == 0) {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + DAT_0014c6d4;
    }
    else {
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + DAT_0014c6d8;
    }
    iVar7 = param_1 + 0x4c4;
    FUN_0037632c(param_1);
    if (((uint)*(float *)(param_1 + 0xc4) <= (uint)fVar12) && (*(char *)(param_1 + 0xb7) != '\0')) {
      iVar8 = param_2 + 0x5c78;
      FUN_003762a4(param_2,iVar8,iVar7);
      FUN_00376168(param_2,iVar8,iVar7);
      if (*(int *)(param_1 + 0x4a0) == iVar2 || *(int *)(param_1 + 0x4a0) == iVar5) {
        FUN_003761f0(param_2,iVar8,iVar7);
        return;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0014c6c4;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x36) = (short)(int)-fVar12;
    *(undefined2 *)(param_1 + 0x4a6) = 0x15;
    *(undefined4 *)(param_1 + 0x4a0) = DAT_0014c6c8;
  }
  return;
}
