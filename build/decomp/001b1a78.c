// OoT3D decomp @ 001b1a78  name=FUN_001b1a78  size=1544

void FUN_001b1a78(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  short sVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;

  *(short *)(param_1 + 700) = *(short *)(param_1 + 700) + 1;
  if (*(short *)(param_1 + 0x2be) != 0) {
    *(short *)(param_1 + 0x2be) = *(short *)(param_1 + 0x2be) + -1;
  }
  if (*(short *)(param_1 + 0x2c0) != 0) {
    *(short *)(param_1 + 0x2c0) = *(short *)(param_1 + 0x2c0) + -1;
  }
  if (*(char *)(param_1 + 0x2df) != '\0') {
    *(char *)(param_1 + 0x2df) = *(char *)(param_1 + 0x2df) + -1;
  }
  FUN_0037322c(DAT_001b1eac,param_1);
  uVar3 = DAT_001b1eb0;
  if ((*(char *)(param_1 + 0x2c3) != '\0') &&
     (((*(ushort *)(param_1 + 0x90) & 8) != 0 ||
      (iVar6 = FUN_0035e600(DAT_001b1eb4,param_1,param_2,(int)*(short *)(param_1 + 0x36)),
      iVar6 == 0)))) {
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
    *(undefined1 *)(param_1 + 0x2c3) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  uVar7 = DAT_001b1eb8;
  if (*(char *)(param_1 + 0x2c4) == '\0') goto LAB_001b1da8;
  if ((*(short *)(param_1 + 0x1c) < 0) && ((*(byte *)(param_1 + 0x1b8) & 2) != 0)) {
    *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
    *(undefined1 *)(param_1 + 0x2c3) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined2 *)(param_1 + 0x2c0) = 0xf;
    *(undefined1 *)(param_1 + 0x2dc) = 2;
    *(undefined1 *)(param_1 + 0x2c4) = 0;
    uVar7 = DAT_001b1ebc;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    if ((*(byte *)(param_1 + 0x211) & 0x80) != 0) {
      *(byte *)(param_1 + 0x211) = *(byte *)(param_1 + 0x211) & 0x7f;
      *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
      goto LAB_001b1da8;
    }
    if ((*(byte *)(param_1 + 0x1b9) & 2) == 0) goto LAB_001b1da8;
    *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
    iVar6 = DAT_001b1ec0;
    iVar12 = DAT_001b1ec0 + 1;
    if (*(char *)(param_1 + 0xb9) == '\x02') {
      FUN_00375eb8(param_1);
      FUN_00375ed8(param_1,0x400000,0xff,0x200000,8);
      if (*(char *)(param_1 + 0xb7) == '\0') {
        FUN_00375bcc(param_1,iVar12);
        *(undefined1 *)(param_1 + 0x2dc) = 3;
        *(undefined1 *)(param_1 + 0x2c4) = 0;
        *(undefined1 *)(param_1 + 0x2de) = 1;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        uVar7 = DAT_001b1ecc;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        *(undefined4 *)(param_1 + 0x2d0) = uVar3;
        *(undefined4 *)(param_1 + 0x1a4) = uVar7;
      }
      else {
        FUN_00375bcc(param_1,iVar6);
      }
      goto LAB_001b1da8;
    }
    if (*(char *)(param_1 + 0xb9) != '\x0f') goto LAB_001b1da8;
    FUN_00375eb8(param_1);
    FUN_00375ed8(param_1,0x400000,0xff,0x200000,8);
    if (*(char *)(param_1 + 0xb7) != '\0') {
      FUN_00375bcc(param_1,iVar6);
      local_44 = *(undefined4 *)(param_1 + 0x28);
      local_40 = *(undefined4 *)(param_1 + 0x2c);
      local_3c = *(undefined4 *)(param_1 + 0x30);
      FUN_00342394(param_1,param_2,&local_44,10);
      *(char *)(param_1 + 0x2c5) = *(char *)(param_1 + 0x2c5) + '\x01';
      goto LAB_001b1da8;
    }
    FUN_00375bcc(param_1,iVar12);
    FUN_00375bcc(param_1,DAT_001b1ec4);
    local_44 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(undefined4 *)(param_1 + 0x2c);
    local_3c = *(undefined4 *)(param_1 + 0x30);
    FUN_00342394(uVar7,param_1,param_2,&local_44,0x1e);
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined1 *)(param_1 + 0x2c2) = 1;
    *(undefined1 *)(param_1 + 0x2c4) = 0;
    *(undefined1 *)(param_1 + 0x2de) = 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    *(undefined2 *)(param_1 + 0x2c0) = 0x5a;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
    FUN_00374444(param_2,param_1,param_1 + 0x28,0x60);
    uVar7 = DAT_001b1ec8;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar7;
LAB_001b1da8:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  if (*(char *)(param_1 + 0x2de) == '\0') {
    FUN_0037632c(param_1,param_1 + 0x1a8);
    FUN_0037632c(param_1,param_1 + 0x200);
    if (*(char *)(param_1 + 0x2c4) != '\0') {
      iVar6 = param_2 + 0x5c78;
      if (*(short *)(DAT_001b1ed0 + param_1) == 0) {
        FUN_00376168(param_2,iVar6,param_1 + 0x1a8);
        FUN_00376168(param_2,iVar6,param_1 + 0x200);
      }
      FUN_003762a4(param_2,iVar6,param_1 + 0x1a8);
    }
  }
  FUN_003705a0(*(undefined4 *)(param_1 + 0x2d0),DAT_001b1ed4,param_1 + 0x6c);
  FUN_00376864(param_1);
  if (*(char *)(param_1 + 0x2c2) != '\0') {
    FUN_00376340(DAT_001b1ed8,DAT_001b1ed8,DAT_001b1ed8,param_2,param_1,5);
  }
  (**(code **)(DAT_001b1edc + (uint)*(byte *)(param_1 + 0x2dc) * 4))(param_1);
  fVar5 = DAT_001b1ee8;
  uVar7 = DAT_001b1ee4;
  fVar4 = DAT_001b1ee0;
  pcVar10 = (char *)(param_1 + 0x2f0);
  sVar11 = 0;
  local_38 = param_2 + 0x5c78;
  do {
    cVar2 = *pcVar10;
    if (cVar2 != '\0') {
      pcVar10[1] = pcVar10[1] + '\x01';
      *(float *)(pcVar10 + 4) = *(float *)(pcVar10 + 4) + *(float *)(pcVar10 + 0x10);
      *(float *)(pcVar10 + 8) = *(float *)(pcVar10 + 8) + *(float *)(pcVar10 + 0x14);
      *(float *)(pcVar10 + 0xc) = *(float *)(pcVar10 + 0xc) + *(float *)(pcVar10 + 0x18);
      *(float *)(pcVar10 + 0x10) = *(float *)(pcVar10 + 0x10) + *(float *)(pcVar10 + 0x1c);
      *(float *)(pcVar10 + 0x14) = *(float *)(pcVar10 + 0x14) + *(float *)(pcVar10 + 0x20);
      *(float *)(pcVar10 + 0x18) = *(float *)(pcVar10 + 0x18) + *(float *)(pcVar10 + 0x24);
      if (cVar2 == '\x01') {
        if (*(short *)(pcVar10 + 0x2e) == 0) {
          sVar1 = *(short *)(pcVar10 + 0x2c) + 10;
          *(short *)(pcVar10 + 0x2c) = sVar1;
          if (99 < sVar1) {
            pcVar10[0x2e] = '\x01';
            pcVar10[0x2f] = '\0';
          }
        }
        else {
          sVar1 = *(short *)(pcVar10 + 0x2c) + -3;
          *(short *)(pcVar10 + 0x2c) = sVar1;
          if (sVar1 < 1) {
            pcVar10[0x2c] = '\0';
            pcVar10[0x2d] = '\0';
            *pcVar10 = '\0';
          }
        }
      }
      else if (cVar2 == '\x02') {
        FUN_00373500(*(float *)(pcVar10 + 0x34),fVar4,*(float *)(pcVar10 + 0x34) * fVar4,
                     pcVar10 + 0x30);
        if (*(short *)(pcVar10 + 0x2e) == 0) {
          if (6 < (byte)pcVar10[1]) {
            pcVar10[0x2e] = '\x01';
            pcVar10[0x2f] = '\0';
          }
        }
        else {
          *(undefined4 *)(pcVar10 + 0x20) = uVar7;
          *(float *)(pcVar10 + 0x10) = *(float *)(pcVar10 + 0x10) * fVar5;
          *(float *)(pcVar10 + 0x18) = *(float *)(pcVar10 + 0x18) * fVar5;
          sVar1 = *(short *)(pcVar10 + 0x2c);
          *(short *)(pcVar10 + 0x2c) = sVar1 + -0x11;
          if ((short)(sVar1 + -0x11) < 1) {
            pcVar10[0x2c] = '\0';
            pcVar10[0x2d] = '\0';
            *pcVar10 = '\0';
          }
        }
        if (((*(char *)(param_1 + 0x2df) == '\0') && (100 < *(short *)(pcVar10 + 0x2c))) &&
           (pcVar10[0x38] != '\0')) {
          uVar8 = *(undefined4 *)(pcVar10 + 8);
          uVar9 = *(undefined4 *)(pcVar10 + 0xc);
          *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(pcVar10 + 4);
          *(undefined4 *)(param_1 + 0x2a8) = uVar8;
          *(undefined4 *)(param_1 + 0x2ac) = uVar9;
          FUN_003761f0(param_2,local_38,param_1 + 600);
        }
        if (*(short *)(pcVar10 + 0x2e) != 2) {
          fVar14 = *(float *)(param_1 + 0x28) - *(float *)(pcVar10 + 4);
          fVar13 = *(float *)(param_1 + 0x30) - *(float *)(pcVar10 + 0xc);
          if (*(float *)(param_1 + 0x2ec) <= fVar14 * fVar14 + fVar13 * fVar13) {
            pcVar10[0x2e] = '\x02';
            pcVar10[0x2f] = '\0';
            *(undefined4 *)(pcVar10 + 0x10) = uVar3;
            *(undefined4 *)(pcVar10 + 0x18) = uVar3;
          }
        }
      }
    }
    sVar11 = sVar11 + 1;
    pcVar10 = pcVar10 + 0x40;
  } while (sVar11 < 0x3c);
  return;
}
