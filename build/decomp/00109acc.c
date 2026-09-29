// OoT3D decomp @ 00109acc  name=FUN_00109acc  size=524

void FUN_00109acc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_34;
  float local_30;
  float local_2c;

  FUN_00376864();
  fVar2 = DAT_00109cdc;
  fVar1 = DAT_00109cd8;
  if ((*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc) <
       DAT_00109cd8 - *(float *)(param_1 + 0x74)) && (*(float *)(param_1 + 100) <= DAT_00109cdc)) {
    iVar3 = *(int *)(param_1 + 0x29c) + 1;
    *(int *)(param_1 + 0x29c) = iVar3;
    if (iVar3 < 7) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_00109ce4;
      if (*(int *)(param_1 + 0x29c) == 1) {
        uVar4 = FUN_0036f848(*(undefined4 *)
                              (param_2 + *(short *)(DAT_00109ce8 + param_2) * 4 + 0xa54),3);
        FUN_0036f7c0(uVar4,DAT_00109cec);
        FUN_0036f6b0(uVar4,0,0,500,0);
        FUN_0036f628(uVar4,0x14);
        FUN_00375bcc(param_1,DAT_00109cf0);
        iVar3 = DAT_00109cf8;
        fVar1 = DAT_00109cf4;
        iVar7 = *(int *)(param_1 + 0x128);
        if (iVar7 != 0) {
          do {
            if ((*(ushort *)(iVar7 + 0x1c) & 0xff) != 0) {
              local_34 = *(float *)(iVar7 + 0x28);
              local_2c = *(float *)(iVar7 + 0x30);
              local_30 = *(float *)(iVar7 + 0x2c) - fVar1;
              FUN_0037378c(fVar2,param_2,&local_34,0,600,300,0);
              fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar7 + 0xbe) + -0x8000));
              fVar9 = (float)FUN_00338f60((int)(short)(*(short *)(iVar7 + 0xbe) + -0x8000));
              local_30 = *(float *)(iVar7 + 0x2c);
              iVar6 = 0;
              do {
                pfVar5 = (float *)(iVar3 + iVar6 * 8);
                fVar10 = pfVar5[1];
                fVar11 = *pfVar5;
                local_34 = fVar10 * fVar8 + fVar11 * fVar9 + *(float *)(iVar7 + 0x28);
                local_2c = (fVar10 * fVar9 - fVar11 * fVar8) + *(float *)(iVar7 + 0x30);
                FUN_0037378c(fVar2,param_2,&local_34,0,0x96,0x96,0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < 0xb);
            }
            iVar7 = *(int *)(iVar7 + 0x128);
          } while (iVar7 != 0);
          return;
        }
      }
    }
    else {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar1;
      *(undefined4 *)(param_1 + 0x298) = 4;
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(DAT_00109ce0 + 0x10);
    }
  }
  return;
}
