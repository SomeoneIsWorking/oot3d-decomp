// OoT3D decomp @ 00123038  name=FUN_00123038  size=680

void FUN_00123038(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_34;
  float local_30;
  float local_2c;

  FUN_00376864();
  fVar1 = DAT_001232e0;
  if (1 < (*(ushort *)(param_1 + 0x1c) & 0xff)) {
    fVar8 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c);
    fVar9 = *(float *)(param_1 + 0x2c) - fVar8;
    if (DAT_001232e0 < fVar9) {
      *(float *)(param_1 + 0x2c) = fVar8;
    }
    else if ((uint)DAT_001232e4 < (uint)fVar9) {
      *(float *)(param_1 + 0x2c) = fVar8 - DAT_001232e8;
    }
  }
  iVar5 = DAT_001232ec;
  for (iVar2 = *(int *)(param_1 + 0x128); DAT_001232ec = iVar5, iVar2 != 0;
      iVar2 = *(int *)(iVar2 + 0x128)) {
    fVar8 = *(float *)(iVar2 + 0x2c);
    if (*(float *)(param_1 + 0x2c) < *(float *)(iVar2 + 0x2c)) {
      fVar8 = *(float *)(param_1 + 0x2c);
    }
    *(float *)(iVar2 + 0x2c) = fVar8;
    iVar5 = DAT_001232ec;
  }
  fVar8 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(iVar5 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4 + -4);
  bVar6 = fVar8 == fVar9;
  bVar7 = fVar9 <= fVar8;
  if (!bVar7 || bVar6) {
    bVar6 = *(float *)(param_1 + 100) == fVar1;
    bVar7 = fVar1 <= *(float *)(param_1 + 100);
  }
  if (!bVar7 || bVar6) {
    iVar2 = *(int *)(param_1 + 0x29c) + 1;
    *(int *)(param_1 + 0x29c) = iVar2;
    if (iVar2 < 7) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_001232f4;
      if (*(int *)(param_1 + 0x29c) == 1) {
        uVar3 = FUN_0036f848(*(undefined4 *)
                              (param_2 + *(short *)(DAT_001232f8 + param_2) * 4 + 0xa54),3);
        FUN_0036f7c0(uVar3,DAT_001232fc);
        FUN_0036f6b0(uVar3,0x14,1,0,0);
        FUN_0036f628(uVar3,7);
        FUN_00375bcc(param_1,DAT_00123300);
        local_34 = *(float *)(param_1 + 0x28);
        local_2c = *(float *)(param_1 + 0x30);
        local_30 = *(float *)(param_1 + 0x2c) - DAT_00123304;
        FUN_0037378c(fVar1,param_2,&local_34,0,600,300,0);
        fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
        fVar9 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
        iVar2 = DAT_00123308;
        local_30 = *(float *)(param_1 + 0x2c);
        iVar5 = 0;
        do {
          pfVar4 = (float *)(iVar2 + iVar5 * 8);
          fVar10 = pfVar4[1];
          fVar11 = *pfVar4;
          local_34 = fVar10 * fVar8 + fVar11 * fVar9 + *(float *)(param_1 + 0x28);
          local_2c = (fVar10 * fVar9 - fVar11 * fVar8) + *(float *)(param_1 + 0x30);
          FUN_0037378c(fVar1,param_2,&local_34,0,0x96,0x96,0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xb);
        if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 5) {
          FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_0012330c);
          return;
        }
      }
    }
    else {
      *(float *)(param_1 + 0x2c) =
           *(float *)(param_1 + 0xc) +
           *(float *)(iVar5 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 4 + -4);
      *(undefined4 *)(param_1 + 0x298) = 3;
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(DAT_001232f0 + 0xc);
    }
  }
  return;
}
