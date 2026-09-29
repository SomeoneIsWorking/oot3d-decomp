// OoT3D decomp @ 001c57a4  name=FUN_001c57a4  size=492

void FUN_001c57a4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;

  fVar6 = DAT_001c5994;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_001c5990;
  iVar5 = FUN_003402f4(*(float *)(param_1 + 0xc) - fVar6,param_1 + 0x2c);
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 0x232) = 3;
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    iVar5 = DAT_001c59a0;
    uVar3 = DAT_001c599c;
    pfVar2 = DAT_001c5998;
    *(float *)(param_1 + 0x12d4) =
         DAT_001c5998[2] * fVar6 + fVar7 * *DAT_001c5998 + *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x12d8) = uVar3;
    *(float *)(param_1 + 0x12dc) =
         (*(float *)(param_1 + 0x30) + fVar7 * pfVar2[2]) - fVar6 * *pfVar2;
    uVar1 = (undefined2)iVar5;
    *(undefined2 *)(param_1 + 0x12f2) = uVar1;
    uVar4 = DAT_001c59a4;
    *(undefined1 *)(param_1 + 0x12f8) = 0xfe;
    *(undefined2 *)(param_1 + 0x12f6) = 0x42;
    *(undefined4 *)(param_1 + 0x12fc) = uVar4;
    *(float *)(param_1 + 0x1300) =
         pfVar2[5] * fVar6 + fVar7 * pfVar2[3] + *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1304) = uVar3;
    *(float *)(param_1 + 0x1308) =
         (*(float *)(param_1 + 0x30) + fVar7 * pfVar2[5]) - fVar6 * pfVar2[3];
    *(undefined2 *)(param_1 + 0x131e) = uVar1;
    *(undefined1 *)(param_1 + 0x1324) = 0xfe;
    *(undefined2 *)(param_1 + 0x1322) = 0x42;
    *(undefined4 *)(param_1 + 0x1328) = uVar4;
    *(float *)(param_1 + 0x132c) =
         pfVar2[8] * fVar6 + fVar7 * pfVar2[6] + *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1330) = uVar3;
    *(float *)(param_1 + 0x1334) =
         (*(float *)(param_1 + 0x30) + fVar7 * pfVar2[8]) - fVar6 * pfVar2[6];
    *(undefined2 *)(param_1 + 0x134a) = uVar1;
    *(undefined1 *)(param_1 + 0x1350) = 0xfe;
    *(undefined2 *)(param_1 + 0x134e) = 0x42;
    *(undefined4 *)(param_1 + 0x1354) = uVar4;
    *(undefined2 *)(iVar5 + 0xdd0 + param_1) = 0xffff;
    *(undefined2 *)(param_1 + 0x234) = 0xb4;
    FUN_00340218(DAT_001c59a8,5);
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c59ac;
  }
  if (DAT_001c59b4 < *(int *)(DAT_001c59b0 + 4)) {
    FUN_003400ac(param_1,param_2);
    return;
  }
  return;
}
