// OoT3D decomp @ 001d7708  name=FUN_001d7708  size=1020

void FUN_001d7708(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_001d7af4,DAT_001d7af8,DAT_001d7af4,param_2,param_1,5);
  if (((*(ushort *)(param_1 + 0x978) & 2) == 0) &&
     (iVar4 = FUN_00370734(param_1 + 0x1fc), iVar4 != 0)) {
    *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 2;
  }
  fVar2 = DAT_001d7afc;
  if ((*(ushort *)(param_1 + 0x978) & 0xc) == 0) {
    if ((*(byte *)(param_1 + 0x1b5) & 2) == 0) {
      (**(code **)(param_1 + 0x98c))(param_1,param_2);
      uVar7 = DAT_001d7b1c;
      fVar10 = DAT_001d7b10;
      if (*(int *)(DAT_001d7b0c + 0x10) != 0) {
        fVar10 = DAT_001d7b14;
      }
      if (*(float *)(param_1 + 0x98) <= fVar10 * DAT_001d7b18) {
        fVar10 = *(float *)(param_1 + 0x9c);
        if (fVar10 < fVar2) {
          fVar10 = -fVar10;
        }
        if (((fVar10 <= *(float *)(param_1 + 0x980)) &&
            ((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2000U <
             0x4001)) &&
           (iVar4 = FUN_00298684(param_2 + 0xa98,param_1 + 0x3c,
                                 *(int *)(DAT_001d7b08 + param_2) + 0x2394,&local_30,auStack_34,0),
           iVar4 == 0)) {
          *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 8;
          *(float *)(param_1 + 0x6c) = fVar2;
          FUN_00369674(param_1,4);
          FUN_0036e980(param_2,param_1,0x5f);
          FUN_0037547c(uVar7,0,4,DAT_001d7b24,DAT_001d7b24,DAT_001d7b20);
          FUN_00367c7c(param_2,0x6000,param_1);
        }
      }
      if (((*(ushort *)(param_1 + 0x1c) & 0xff) == 1) && (*(int *)(param_1 + 0x98) < DAT_001d7b28))
      {
        *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 8;
        *(float *)(param_1 + 0x6c) = fVar2;
        FUN_00369674(param_1,4);
        FUN_0036e980(param_2,param_1,0x5f);
        FUN_0037547c(uVar7,0,4,DAT_001d7b24,DAT_001d7b24,DAT_001d7b20);
        FUN_00367c7c(param_2,0x6000,param_1);
      }
    }
    else {
      puVar8 = *(undefined4 **)(param_1 + 0x1e0);
      local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
      local_2c = VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(in_fpscr >> 0x15) & 3);
      local_28 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3);
      puVar5 = *(uint **)(param_1 + 0x1e0);
      uVar6 = 0;
      if (puVar5 != (uint *)0x0) {
        uVar6 = *puVar5;
      }
      if (puVar5 != (uint *)0x0 && (uVar6 & 0x80) != 0) {
        FUN_00375ed8(param_1,0,0x78,0,400);
        *(undefined4 *)(param_1 + 0x13c) = DAT_001d7b00;
        FUN_003741e4(param_2,*puVar8,1,&local_30,0);
        return;
      }
      FUN_00369674(param_1,3);
      *(float *)(param_1 + 0x6c) = fVar2;
      *(undefined1 *)(param_1 + 0x989) = 0x96;
      *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 4;
      FUN_00375bcc(param_1,DAT_001d7b04);
      uVar7 = 0;
      if (puVar8 != (undefined4 *)0x0) {
        uVar7 = *puVar8;
      }
      FUN_003741e4(param_2,uVar7,0,&local_30,0);
    }
  }
  else {
    (**(code **)(param_1 + 0x98c))(param_1,param_2);
  }
  if (((*(ushort *)(param_1 + 0x978) & 4) == 0) && ((*(ushort *)(param_1 + 0x1c) & 0xff) < 2)) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  }
  FUN_00376864(param_1);
  if ((*(short *)(param_1 + 0x96a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x96a) + -1, *(short *)(param_1 + 0x96a) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x968) = *(short *)(param_1 + 0x96a);
    iVar4 = DAT_001d7b2c;
    if (2 < *(short *)(param_1 + 0x96a)) {
      *(undefined2 *)(param_1 + 0x968) = 0;
    }
    uVar3 = ~*(ushort *)(iVar4 + 0xfe) & 0xf;
    bVar9 = uVar3 == 0;
    if (bVar9) {
      uVar3 = *(ushort *)(param_1 + 0x978);
    }
    if (!bVar9 || (uVar3 & 4) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x13c) = DAT_001d7b30;
    *(undefined1 *)(param_1 + 0x1f) = 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
