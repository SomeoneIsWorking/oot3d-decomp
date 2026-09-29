// OoT3D decomp @ 001bc898  name=FUN_001bc898  size=1364

void FUN_001bc898(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float fVar6;

  uVar1 = DAT_001bcbac;
  if ((*(byte *)(param_1 + 0xcf9) & 0x80) == 0) {
    if ((((*(byte *)(param_1 + 0xe59) & 2) != 0) || ((*(byte *)(param_1 + 0xeb1) & 2) != 0)) &&
       (5 < *(int *)(param_1 + 0xcb8))) {
      if ((((*(byte *)(param_1 + 0xe59) & 2) == 0) && ((*(byte *)(param_1 + 0xeb1) & 2) != 0)) ||
         (DAT_001bcbb0 <
          (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 19000U)) {
        *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) << 2;
      }
      *(byte *)(param_1 + 0xe59) = *(byte *)(param_1 + 0xe59) & 0xfd;
      *(byte *)(param_1 + 0xeb1) = *(byte *)(param_1 + 0xeb1) & 0xfd;
      if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_001bcc54;
      *(char *)(param_1 + 0xcca) = *(char *)(param_1 + 0xb9);
      FUN_00375fd0(param_1,param_1 + 0xe60,1);
      *(undefined2 *)(param_1 + 0xcdc) = 0;
      if (*(char *)(param_1 + 0xb9) == '\x01' || *(char *)(param_1 + 0xb9) == '\x0f') {
        if (*(int *)(param_1 + 0xcb8) != 0xf) {
          FUN_00375ed8(param_1,0,0x78,0,0x50);
          FUN_00375eb8(param_1);
          uVar2 = DAT_001bcbb4;
          if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
            *(undefined4 *)(param_1 + 0x6c) = uVar1;
          }
          FUN_00375bcc(param_1,uVar2);
          FUN_003ab92c(uVar1,param_1 + 0x1e0,DAT_001bcbb8);
          *(undefined4 *)(param_1 + 0xcc0) = DAT_001bcbbc;
          *(undefined4 *)(param_1 + 0xcb8) = 0xf;
        }
      }
      else {
        FUN_00375ed8(param_1,0x400000,0xff,0,8);
        if (*(char *)(param_1 + 0xcca) == '\x0e') {
          *(undefined2 *)(param_1 + 0xcc8) = 0x3c;
        }
        iVar4 = FUN_00375eb8(param_1);
        uVar2 = DAT_001bcbc0;
        if (iVar4 == 0) {
          FUN_0035a49c(param_1 + 0x1e0,DAT_001bcbc4);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            *(undefined2 *)(param_1 + 0xce4) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x6c) = DAT_001bcbc8;
            *(undefined2 *)(param_1 + 0xce4) = 0;
          }
          *(undefined4 *)(param_1 + 0xcb8) = 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(int *)(param_1 + 0xccc) = (int)*(float *)(param_1 + 0x22c);
          FUN_00375bcc(param_1,DAT_001bcbcc);
          *(undefined4 *)(param_1 + 0xcc0) = DAT_001bcbd0;
          FUN_00375b70(param_2,param_1);
        }
        else {
          FUN_0035a49c(param_1 + 0x1e0,DAT_001bcbb8);
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            *(undefined2 *)(param_1 + 0xce4) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            *(undefined2 *)(param_1 + 0xce4) = 0;
          }
          *(undefined2 *)(param_1 + 0xcc6) = 0;
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          FUN_00375bcc(param_1,DAT_001bcbd4);
          *(undefined4 *)(param_1 + 0xcc0) = DAT_001bcbd8;
          *(undefined4 *)(param_1 + 0xcb8) = 3;
        }
      }
    }
  }
  else {
    *(byte *)(param_1 + 0xcf9) = *(byte *)(param_1 + 0xcf9) & 0x7d;
    *(byte *)(param_1 + 0xe59) = *(byte *)(param_1 + 0xe59) & 0xfd;
    *(byte *)(param_1 + 0xeb1) = *(byte *)(param_1 + 0xeb1) & 0xfd;
  }
  if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_001bcc54;
  FUN_00376864(param_1);
  FUN_00376340(DAT_001bcbe4,DAT_001bcbe0,DAT_001bcbdc,param_2,param_1,0x1d);
  (**(code **)(param_1 + 0xcc0))(param_1,param_2);
  iVar4 = *(int *)(param_1 + 0xcb8);
  if (iVar4 == 6) {
    if (*(short *)(param_1 + 0xcc6) != 0) {
      fVar6 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xcc6) * (short)DAT_001bcbe8));
      *(short *)(param_1 + 0xf12) = (short)(int)(fVar6 * DAT_001bcbec);
      goto LAB_001bcc54;
    }
  }
  else {
    if (iVar4 == 0xf) goto LAB_001bcc54;
    if (iVar4 == 8) {
      *(undefined2 *)(param_1 + 0xf12) = 0;
      goto LAB_001bcc54;
    }
  }
  FUN_00375a18(param_1 + 0xf12,(int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe))
               ,1,DAT_001bce70,0);
  sVar3 = *(short *)(param_1 + 0xf12);
  uVar5 = DAT_001bce74;
  if (((int)sVar3 < (int)DAT_001bce74) ||
     (uVar5 = DAT_001bce74 ^ (int)DAT_001bce74 >> 0xd, (int)uVar5 < (int)sVar3)) {
    sVar3 = (short)uVar5;
  }
  *(short *)(param_1 + 0xf12) = sVar3;
LAB_001bcc54:
  if ((*(ushort *)(param_1 + 0x90) & 3) == 0) {
    FUN_00375a18(param_1 + 0xbc,0,1,1000,0);
    FUN_00375a18(param_1 + 0xc0,0,1,1000,0);
  }
  else {
    FUN_0035e7b4(param_1,(int)*(short *)(param_1 + 0xbe),param_1 + 0xbc);
  }
  iVar4 = param_2 + 0x5c78;
  FUN_003762a4(param_2);
  if ((5 < *(int *)(param_1 + 0xcb8)) &&
     ((*(short *)(param_1 + 0x11a) == 0 || ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)))) {
    FUN_0037632c(param_1);
    FUN_00376168(param_2,iVar4,param_1 + 0xea0);
    FUN_00376168(param_2,iVar4,param_1 + 0xe48);
  }
  if (*(int *)(param_1 + 0xcb8) == 7) {
    FUN_00376168(param_2,iVar4,param_1 + 0xce8);
  }
  if (0 < *(short *)(param_1 + 0xcdc)) {
    if ((*(byte *)(param_1 + 0xcf8) & 4) == 0) {
      FUN_003761f0(param_2,iVar4,param_1 + 0xce8);
    }
    else {
      fVar6 = DAT_001bce78;
      if (0xf < (int)*(float *)(param_1 + 0x21c)) {
        fVar6 = DAT_001bce7c;
      }
      FUN_00353020(DAT_001bce80,*(float *)(param_1 + 0x21c) - DAT_001bce78,fVar6,uVar1,
                   param_1 + 0x1e0,DAT_001bce84,3);
      uVar1 = DAT_001bce88;
      *(undefined4 *)(param_1 + 0xcb8) = 0xc;
      *(undefined2 *)(param_1 + 0xcdc) = 0;
      *(undefined4 *)(param_1 + 0xcc0) = uVar1;
    }
  }
  fVar6 = DAT_001bce8c;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar6;
  if (*(char *)(param_1 + 0xce6) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(byte *)(param_1 + 0xce6) = *(char *)(param_1 + 0xce6) + 1U & 3;
  return;
}
