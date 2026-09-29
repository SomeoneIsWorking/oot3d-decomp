// OoT3D decomp @ 001226bc  name=FUN_001226bc  size=1100

void FUN_001226bc(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  cVar1 = *(char *)(param_1 + 0x203);
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x264) = 0x3c;
    *(undefined1 *)(param_1 + 0x203) = 1;
LAB_001226fc:
    sVar2 = *(short *)(param_1 + 0x264);
    *(short *)(param_1 + 0x264) = sVar2 + -1;
    if (sVar2 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x264) = 0x78;
    *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 4;
    *(undefined1 *)(param_1 + 0x203) = 2;
  }
  else {
    if (cVar1 == '\x01') goto LAB_001226fc;
    if (cVar1 != '\x02') goto LAB_00122838;
  }
  iVar11 = DAT_00122afc;
  *(short *)(param_1 + 0x264) = *(short *)(param_1 + 0x264) + -1;
  FUN_00363f20(param_1 + 0x248,iVar11 + 8);
  uVar12 = DAT_00122b00;
  uVar10 = (uint)*(ushort *)(param_1 + 0x264);
  if ((uVar10 < 0x78) &&
     (uVar14 = (undefined4)((ulonglong)uVar10 * (ulonglong)DAT_00122b00),
     (int)(uVar10 + (uint)((ulonglong)uVar10 * (ulonglong)DAT_00122b00 >> 0x24) * -0x1e) < 0xc)) {
    if (uVar10 < 0x1e) {
      FUN_00363f20(param_1 + 0x248,iVar11,uVar14);
      iVar11 = (uint)*(ushort *)(param_1 + 0x264) +
               (uint)((ulonglong)(uint)*(ushort *)(param_1 + 0x264) * (ulonglong)uVar12 >> 0x24) *
               -0x1e;
      uVar14 = DAT_00122b0c;
    }
    else {
      FUN_00363f20(param_1 + 0x248,iVar11 + 4,uVar14);
      iVar11 = (uint)*(ushort *)(param_1 + 0x264) +
               (uint)((ulonglong)(uint)*(ushort *)(param_1 + 0x264) * (ulonglong)uVar12 >> 0x24) *
               -0x1e;
      uVar14 = DAT_00122b10;
    }
    if (iVar11 == 0xb) {
      FUN_0037547c(uVar14,0,4,DAT_00122b08,DAT_00122b08,DAT_00122b04);
    }
  }
  if (*(short *)(param_1 + 0x264) == 0) {
    *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) & 0xfb;
    *(char *)(param_1 + 0x203) = *(char *)(param_1 + 0x203) + '\x01';
  }
LAB_00122838:
  uVar14 = DAT_00122b18;
  iVar11 = DAT_00122b14;
  if (*(char *)(param_1 + 0x203) == '\x03') {
    uVar12 = *(uint *)(DAT_00122b14 + 4);
    if ((uVar12 & 1) == 0) {
      iVar13 = FUN_003679b4(DAT_00122b14 + 4);
      puVar5 = DAT_00122b20;
      uVar4 = DAT_00122b1c;
      uVar12 = 0;
      if (iVar13 != 0) {
        *DAT_00122b20 = uVar14;
        puVar5[1] = uVar4;
        puVar5[2] = uVar14;
        uVar12 = iVar11 + 4;
      }
    }
    uVar9 = DAT_00122b34;
    fVar8 = DAT_00122b30;
    fVar7 = DAT_00122b2c;
    uVar6 = DAT_00122b28;
    uVar4 = DAT_00122b24;
    uVar10 = 0;
    do {
      local_4c = (float)FUN_003738a8(uVar4,uVar12);
      local_48 = FUN_00371e50(uVar6);
      local_44 = (float)FUN_003738a8(uVar4);
      local_40 = *(float *)(param_1 + 0x28) + local_4c * fVar7;
      local_3c = *(float *)(param_1 + 0x2c) + fVar8;
      local_38 = *(float *)(param_1 + 0x30) + local_44 * fVar7;
      fVar15 = (float)FUN_00371e50(uVar9);
      FUN_00365d20(param_2,&local_40,&local_4c,DAT_00122b20,DAT_00122b38 + -4,DAT_00122b38,
                   (int)(short)((short)(int)fVar15 + 200),0x28,0xf);
      uVar12 = uVar10 + 1;
      uVar10 = uVar12 & 0xff;
    } while (uVar10 < 3);
    FUN_00373264(param_1,DAT_00122b3c);
    uVar3 = *(ushort *)(param_1 + 0x264);
    *(ushort *)(param_1 + 0x264) = uVar3 + 1;
    uVar4 = DAT_00122b40;
    if (0x3b < uVar3) {
      *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 0x10;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      *(undefined4 *)(param_1 + 0xfc) = uVar4;
      *(undefined4 *)(param_1 + 0x70) = DAT_00122b44;
      *(char *)(param_1 + 0x203) = *(char *)(param_1 + 0x203) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0x203) == '\x04') {
    FUN_00376340(DAT_00122b4c,DAT_00122b4c,DAT_00122b48,param_2,param_1,3);
    if ((*(ushort *)(param_1 + 0x90) & 0x18) == 0) {
      FUN_00373264(param_1,DAT_00122b68);
    }
    else {
      if (((*(uint *)(iVar11 + 0x14) & 1) == 0) &&
         (iVar13 = FUN_003679b4(DAT_00122b50), puVar5 = DAT_00122b54, iVar13 != 0)) {
        *DAT_00122b54 = uVar14;
        puVar5[1] = uVar14;
        puVar5[2] = uVar14;
      }
      if (((*(uint *)(iVar11 + 0x10) & 1) == 0) &&
         (iVar11 = FUN_003679b4(DAT_00122b58), puVar5 = DAT_00122b5c, iVar11 != 0)) {
        *DAT_00122b5c = uVar14;
        puVar5[1] = uVar14;
        puVar5[2] = uVar14;
      }
      local_40 = *(float *)(param_1 + 0x28);
      local_3c = *(float *)(param_1 + 0x2c);
      local_38 = *(float *)(param_1 + 0x30);
      FUN_00375bcc(param_1,DAT_00122b60);
      FUN_0036f95c(param_2,&local_40,DAT_00122b5c + -3,DAT_00122b5c,100,0x14);
      *(undefined2 *)(param_1 + 0x264) = 0xf;
      *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 8;
      *(undefined4 *)(param_1 + 0x1fc) = DAT_00122b64;
    }
    FUN_00376864(param_1);
    if (DAT_00122b6c < *(uint *)(param_1 + 0x9c)) {
      FUN_00374428(param_1);
      return;
    }
  }
  return;
}
