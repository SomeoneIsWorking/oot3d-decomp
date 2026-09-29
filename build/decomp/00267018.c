// OoT3D decomp @ 00267018  name=FUN_00267018  size=1144

void FUN_00267018(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;

  uVar2 = DAT_0026731c;
  if ((*(byte *)(param_1 + 0x3b8) & 2) != 0) {
    *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) & 0xfd;
    FUN_003731e8(uVar2,param_1 + 0x1d4);
    *(undefined2 *)(param_1 + 0x25e) = 0xe;
    *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) | 1;
    *(undefined4 *)(param_1 + 600) = DAT_00267320;
  }
  iVar3 = DAT_0026732c;
  uVar2 = DAT_00267328;
  uVar5 = DAT_00267324;
  if ((*(byte *)(param_1 + 0x3b9) & 2) == 0) {
    bVar9 = *(char *)(DAT_00267348 + param_2) == '\0';
    uVar5 = 0;
    if (!bVar9) {
      uVar5 = (uint)*(byte *)(param_1 + 0x3bc);
    }
    bVar10 = uVar5 == 0xc;
    if (!bVar9 && !bVar10) {
      uVar5 = *(uint *)(param_1 + 600);
    }
    if ((bVar9 || bVar10) || uVar5 == DAT_00267324) goto LAB_002673ac;
    bVar9 = uVar5 == DAT_0026734c;
    if (!bVar9) {
      uVar5 = (uint)*(byte *)(param_1 + 0xb7);
    }
    if (bVar9 || uVar5 == 0) goto LAB_002673ac;
    *(char *)(param_1 + 0xb7) = (char)uVar5 + -1;
    *(undefined1 *)(param_1 + 0x122) = 0;
    FUN_0032d48c(param_1,1);
  }
  else {
    *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfd;
    FUN_003742c4(param_1,param_1 + 0x3a8,1);
    if (*(char *)(param_1 + 0x3bc) == '\f') goto LAB_002673ac;
    cVar1 = *(char *)(param_1 + 0xb9);
    uVar6 = extraout_r1;
    if (cVar1 == '\0') {
      uVar6 = (uint)*(byte *)(param_1 + 0xb8);
    }
    if (cVar1 == '\0' && uVar6 == 0) goto LAB_002673ac;
    uVar6 = (uint)*(byte *)(param_1 + 0xb7) - (uint)*(byte *)(param_1 + 0xb8);
    if (*(uint *)(param_1 + 600) == uVar5) {
      if (cVar1 == '\x0e' || cVar1 == '\x0f') {
        if ((int)uVar6 < 1) {
          FUN_003731e8(uVar2,param_1 + 0x1d4);
          uVar4 = DAT_00267338;
          *(undefined2 *)(param_1 + 0x25e) = 0;
          *(undefined4 *)(param_1 + 0x70) = uVar4;
          fVar11 = DAT_00267340;
          *(undefined4 *)(param_1 + 100) = DAT_0026733c;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
          *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x3a0) * fVar11;
          *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfe;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
          *(int *)(param_1 + 600) = iVar3;
        }
        else {
          *(undefined2 *)(param_1 + 0x260) = 0xa000;
          *(undefined2 *)(param_1 + 0x266) = 0xb000;
          *(undefined2 *)(param_1 + 0x264) = 0xb800;
          iVar7 = 3;
          iVar8 = *(int *)(param_1 + 0x3c4) + 0x16;
          do {
            iVar7 = iVar7 + -1;
            *(byte *)(iVar8 + 0x50) = *(byte *)(iVar8 + 0x50) & 0xfe;
            *(byte *)(iVar8 + 0xa0) = *(byte *)(iVar8 + 0xa0) & 0xfe;
            iVar8 = iVar8 + 0xa0;
          } while (iVar7 != 0);
          FUN_00375ed8(param_1,0x400000,0xff,0,0x23);
          *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfe;
          *(undefined4 *)(param_1 + 600) = DAT_00267334;
        }
      }
      else {
        if (cVar1 == '\x01') goto LAB_002673ac;
LAB_00267228:
        FUN_0032d48c(param_1,0);
      }
    }
    else {
      uVar5 = (uint)*(byte *)(param_1 + 0xb7);
      if ((cVar1 == '\x0e') || (uVar5 = uVar6, cVar1 == '\x01')) {
        uVar6 = uVar5;
        FUN_0032d48c(param_1,2);
      }
      else {
        if (*(uint *)(param_1 + 600) != DAT_00267330) goto LAB_00267228;
        if ((int)uVar6 < 1) {
          uVar6 = 1;
        }
        FUN_0032d48c(param_1,1);
      }
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    *(char *)(param_1 + 0xb7) = (char)uVar6;
    if (*(char *)(param_1 + 0xb9) == '\x02') {
      iVar8 = 0;
      fVar11 = *(float *)(param_1 + 0x3a0) * DAT_00267344;
      do {
        FUN_003580ec(param_2,param_1,param_1 + 0x28,(int)(short)(int)fVar11,0,0,(int)(short)iVar8,1)
        ;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    }
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    FUN_00375b70(param_2,param_1);
    if (*(short *)(param_1 + 0x1c) == 1) {
      FUN_00375bcc(param_1,DAT_002674d0);
    }
    else {
      FUN_00375bcc(param_1,DAT_002674d4);
    }
  }
  else if (*(short *)(DAT_00267350 + param_1) == 3) {
    FUN_00375bcc(param_1,DAT_00267354);
  }
  else {
    FUN_00375bcc(param_1,DAT_002674cc);
  }
LAB_002673ac:
  (**(code **)(param_1 + 600))(param_1,param_2);
  iVar8 = DAT_002674d8;
  if (*(int *)(param_1 + 600) == iVar3) {
    FUN_00376864(param_1);
    FUN_00376340(DAT_002674e0,*(float *)(param_1 + 0x3a0) * DAT_002674dc,DAT_002674e0,param_2,
                 param_1,5);
  }
  else if ((*(int *)(param_1 + 600) != DAT_002674d8) &&
          (FUN_00376340(uVar2,uVar2,uVar2,param_2,param_1,4), *(int *)(param_1 + 0x3a4) == 0)) {
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(int *)(param_1 + 600) == DAT_002674e4) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x3a8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  }
  if ((*(byte *)(param_1 + 0x3b9) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x3a8);
  }
  if (*(int *)(param_1 + 600) != iVar8) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x3a8);
  }
  *(bool *)(*(int *)(param_1 + 0x1fc) + 0xad) = *(char *)(param_1 + 0x121) != '\0';
  return;
}
