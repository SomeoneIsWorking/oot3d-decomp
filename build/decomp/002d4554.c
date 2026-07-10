// OoT3D decomp @ 002d4554  name=FUN_002d4554  size=776

void FUN_002d4554(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar8 = param_2[5];
  fVar18 = param_2[10];
  fVar28 = param_2[0xb];
  fVar5 = param_2[4];
  fVar6 = param_2[6];
  fVar20 = param_2[0xf];
  fVar9 = param_2[7];
  fVar27 = param_2[8];
  fVar26 = param_2[9];
  fVar23 = param_2[0xd];
  fVar29 = param_2[0xe];
  fVar30 = fVar9 * fVar18;
  fVar2 = *param_2;
  fVar25 = param_2[0xc];
  fVar3 = param_2[1];
  fVar16 = fVar8 * fVar28;
  fVar21 = fVar9 * fVar27;
  fVar22 = fVar5 * fVar18;
  fVar7 = param_2[2];
  fVar24 = fVar8 * fVar27;
  fVar17 = fVar6 * fVar26;
  fVar4 = param_2[3];
  fVar1 = (((((fVar8 * fVar18 * fVar20 + fVar6 * fVar28 * fVar23 + fVar9 * fVar26 * fVar29) * fVar2
              + fVar3 * (fVar5 * fVar28 * fVar29 + fVar6 * fVar27 * fVar20 + fVar30 * fVar25) +
              fVar7 * (fVar5 * fVar26 * fVar20 + fVar16 * fVar25 + fVar21 * fVar23) +
             fVar4 * (fVar22 * fVar23 + fVar24 * fVar29 + fVar17 * fVar25)) -
            fVar2 * (fVar16 * fVar29 + fVar17 * fVar20 + fVar30 * fVar23)) -
           fVar3 * (fVar22 * fVar20 + fVar6 * fVar28 * fVar25 + fVar21 * fVar29)) -
          fVar7 * (fVar5 * fVar28 * fVar23 + fVar24 * fVar20 + fVar9 * fVar26 * fVar25)) -
          fVar4 * (fVar5 * fVar26 * fVar29 + fVar8 * fVar18 * fVar25 + fVar6 * fVar27 * fVar23);
  if (fVar1 != fRam002d485c) {
    fVar1 = fRam002d4860 / fVar1;
    fVar17 = fVar17 - fVar8 * fVar18;
    fVar15 = fVar9 * fVar23 - fVar8 * fVar20;
    fVar12 = fVar26 * fVar20 - fVar28 * fVar23;
    fVar11 = fVar18 * fVar25 - fVar27 * fVar29;
    fVar10 = fVar18 * fVar20 - fVar28 * fVar29;
    fVar13 = fVar26 * fVar25 - fVar27 * fVar23;
    fVar22 = fVar22 - fVar6 * fVar27;
    fVar18 = fVar18 * fVar23 - fVar26 * fVar29;
    fVar14 = fVar6 * fVar20 - fVar9 * fVar29;
    fVar27 = fVar27 * fVar20 - fVar28 * fVar25;
    fVar19 = fVar5 * fVar20 - fVar9 * fVar25;
    fVar16 = fVar16 - fVar9 * fVar26;
    fVar24 = fVar24 - fVar5 * fVar26;
    fVar26 = fVar6 * fVar25 - fVar5 * fVar29;
    fVar20 = fVar8 * fVar29 - fVar6 * fVar23;
    fVar21 = fVar21 - fVar5 * fVar28;
    fVar30 = fVar30 - fVar6 * fVar28;
    fVar23 = fVar5 * fVar23 - fVar8 * fVar25;
    *(float *)(param_1 + 0x28) = ((fVar8 * fVar10 - fVar6 * fVar12) - fVar9 * fVar18) * fVar1;
    *(float *)(param_1 + 0x2c) = ((fVar7 * fVar12 + fVar4 * fVar18) - fVar3 * fVar10) * fVar1;
    *(float *)(param_1 + 0x30) = (fVar3 * fVar14 + fVar7 * fVar15 + fVar4 * fVar20) * fVar1;
    *(float *)(param_1 + 0x34) = (fVar3 * fVar30 + fVar7 * fVar16 + fVar4 * fVar17) * fVar1;
    *(float *)(param_1 + 0x38) = ((fVar6 * fVar27 + fVar9 * fVar11) - fVar5 * fVar10) * fVar1;
    *(float *)(param_1 + 0x3c) = ((fVar2 * fVar10 - fVar7 * fVar27) - fVar4 * fVar11) * fVar1;
    *(float *)(param_1 + 0x40) = ((fVar7 * fVar19 + fVar4 * fVar26) - fVar2 * fVar14) * fVar1;
    *(float *)(param_1 + 0x44) = ((fVar7 * fVar21 + fVar4 * fVar22) - fVar2 * fVar30) * fVar1;
    *(float *)(param_1 + 0x48) = ((fVar5 * fVar12 - fVar8 * fVar27) - fVar9 * fVar13) * fVar1;
    *(float *)(param_1 + 0x4c) = ((fVar3 * fVar27 + fVar4 * fVar13) - fVar2 * fVar12) * fVar1;
    *(float *)(param_1 + 0x50) = ((fVar4 * fVar23 - fVar2 * fVar15) - fVar3 * fVar19) * fVar1;
    *(float *)(param_1 + 0x54) = ((fVar4 * fVar24 - fVar2 * fVar16) - fVar3 * fVar21) * fVar1;
    *(float *)(param_1 + 0x58) = ((fVar5 * fVar18 - fVar8 * fVar11) + fVar6 * fVar13) * fVar1;
    *(float *)(param_1 + 0x5c) = ((fVar3 * fVar11 - fVar7 * fVar13) - fVar2 * fVar18) * fVar1;
    *(float *)(param_1 + 0x60) = ((-fVar7 * fVar23 - fVar2 * fVar20) - fVar3 * fVar26) * fVar1;
    *(float *)(param_1 + 100) = ((-fVar7 * fVar24 - fVar2 * fVar17) - fVar3 * fVar22) * fVar1;
  }
  return;
}

