// OoT3D decomp @ 00247488  name=FUN_00247488  size=516

void FUN_00247488(short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  bool bVar9;

  uVar8 = *(undefined4 *)(DAT_002477d4 + param_2);
  FUN_003731e0(param_1 + 0xd2);
  if (*(int *)(param_1 + 0x29a) != 0) {
    *(int *)(param_1 + 0x29a) = *(int *)(param_1 + 0x29a) + -1;
  }
  uVar4 = DAT_002477d8;
  sVar1 = param_1[0x49];
  sVar2 = param_1[0x5f];
  iVar5 = (int)param_1[0x29e];
  if (iVar5 == 0) {
    iVar5 = FUN_003306c4(param_1,uVar8);
    if (iVar5 <= DAT_002477dc) {
      uVar6 = (int)(short)(sVar1 - sVar2) + 0x4000;
      bVar9 = uVar6 == 0x8000;
      if (uVar6 < 0x8001) {
        bVar9 = *(int *)(param_1 + 0x29a) == 0;
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + 0x36) = DAT_002477e0;
        *(undefined4 *)(param_1 + 0x38) = DAT_002477e4;
        uVar8 = DAT_002477e8;
        param_1[0x298] = 1;
        param_1[0x299] = 0;
        param_1[0x29a] = 0xb;
        param_1[0x29b] = 0;
        *(undefined4 *)(param_1 + 0x32) = uVar8;
        param_1[0x48] = param_1[0x48] & 0xfffe;
        param_1[0x29e] = param_1[0x29e] + 1;
        FUN_00330544(param_2,param_1,0);
      }
    }
  }
  else {
    if (iVar5 == 1) {
      if (*(int *)(param_1 + 0x29a) == 0) {
        param_1[0x298] = 0;
        param_1[0x299] = 0;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    bVar9 = iVar5 != 2;
    if (!bVar9) {
      iVar5 = *(int *)(param_1 + 0x29a);
    }
    if (bVar9 || iVar5 != 0) goto LAB_0024785c;
    *(undefined4 *)(param_1 + 0x36) = DAT_002477d8;
    param_1[0x29e] = 0;
    param_1[0x29a] = 0xb4;
    param_1[0x29b] = 0;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x32) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
    param_1[0x1a] = param_1[10];
    param_1[0x1b] = param_1[0xb];
    param_1[0x1c] = param_1[0xc];
    param_1[0x5e] = param_1[0x1a];
    param_1[0x5f] = param_1[0x1b];
    param_1[0x60] = param_1[0x1c];
    iVar5 = *(int *)(param_1 + 0x94);
    psVar3 = param_1;
    while (iVar5 != 0) {
      psVar7 = *(short **)(psVar3 + 0x94);
      if (*psVar7 == 0x69) {
        psVar7[0x92] = 0;
        psVar7[0x93] = 0;
        psVar3[0x94] = 0;
        psVar3[0x95] = 0;
        psVar7[0xe] = 0xb;
      }
      psVar3 = psVar7;
      iVar5 = *(int *)(psVar7 + 0x94);
    }
    param_1[0x94] = 0;
    param_1[0x95] = 0;
  }
  if (param_1[0x29e] == 0) {
    return;
  }
LAB_0024785c:
  if ((int)*(float *)(param_1 + 0xf0) == 0 || (int)*(float *)(param_1 + 0xf0) == 5) {
    FUN_00375bcc(param_1,DAT_0024789c);
  }
  FUN_00375bcc(param_1,DAT_002478a0);
  return;
}
