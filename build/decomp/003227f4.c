// OoT3D decomp @ 003227f4  name=FUN_003227f4  size=932

void FUN_003227f4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  uVar1 = DAT_00322b04;
  uVar7 = DAT_00322b00;
  iVar10 = DAT_00322afc;
  iVar6 = *(int *)(DAT_00322afc + 0xc);
  uVar9 = (uint)*(byte *)(param_1 + 0x10e8);
  if (iVar6 < 1) {
    if (iVar6 == 0) {
      *(undefined4 *)(DAT_00322afc + 0xc) = 0xffffffff;
    }
    if (iVar6 == 0 && uVar9 == 8) {
      FUN_00341188(uVar7,param_1,0x28,2,0);
      *(undefined4 *)(param_1 + 0xf60) = 0x11;
      if (((*(uint *)(iVar10 + 8) & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_00322b08), puVar2 = DAT_00322b0c, iVar6 != 0)) {
        *DAT_00322b0c = uVar1;
        puVar2[1] = uVar1;
        puVar2[2] = uVar1;
      }
      FUN_00319ae8(DAT_00322b0c,DAT_00322b10,2);
    }
  }
  else {
    *(int *)(DAT_00322afc + 0xc) = iVar6 + -1;
  }
  if (uVar9 == *(uint *)(param_1 + 0x1004)) {
    return;
  }
  switch(uVar9) {
  case 0:
    FUN_00341188(uVar1,param_1,0x23,0);
    uVar7 = 7;
    break;
  case 1:
    FUN_00341188(uVar7,param_1,0x20,2,0);
    uVar7 = 8;
    break;
  case 2:
    FUN_00341188(uVar7,param_1,0x25,2,0);
    uVar7 = 9;
    break;
  case 3:
    FUN_00341188(uVar7,param_1,0x21,2,0);
    iVar10 = (int)*(short *)(param_1 + 0x36);
    pfVar8 = (float *)(param_1 + 0x104c);
    *(float *)(param_1 + 0x1040) = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1044) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1048) = *(undefined4 *)(param_1 + 0x30);
    *pfVar8 = *(float *)(param_1 + 0x1040);
    *(undefined4 *)(param_1 + 0x1050) = *(undefined4 *)(param_1 + 0x1044);
    *(undefined4 *)(param_1 + 0x1054) = *(undefined4 *)(param_1 + 0x1048);
    fVar11 = (float)FUN_00338f60(iVar10);
    fVar3 = DAT_00322b14;
    fVar11 = fVar11 * DAT_00322b14;
    fVar12 = (float)FUN_002cfca0(iVar10);
    fVar4 = DAT_00322b18;
    *(float *)(param_1 + 0x1054) = (fVar11 - fVar12 * DAT_00322b18) + *(float *)(param_1 + 0x1054);
    fVar12 = (float)FUN_002cfca0(iVar10);
    fVar13 = (float)FUN_00338f60(iVar10);
    uVar5 = DAT_00322b28;
    uVar1 = DAT_00322b24;
    uVar7 = DAT_00322b20;
    fVar11 = DAT_00322b1c;
    *pfVar8 = fVar12 * fVar3 + fVar13 * fVar4 + *pfVar8;
    *(float *)(param_1 + 0x1050) = *(float *)(param_1 + 0x1050) + fVar11;
    FUN_0037547c(uVar5,param_1 + 0x28,4,uVar1,uVar1,uVar7);
    *(undefined2 *)(DAT_00322b2c + param_1) = 2;
    uVar7 = 10;
    break;
  case 4:
    FUN_00341188(uVar7,param_1,0x2d,2,0);
    *(undefined4 *)(param_1 + 0xf60) = 0xc;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
    goto switchD_003228d4_default;
  case 5:
    FUN_00341188(uVar7,param_1,0x26,2,0);
    uVar7 = 0xe;
    break;
  case 6:
    FUN_00341188(uVar7,param_1,0x29,2,0);
    uVar7 = 0xf;
    break;
  case 7:
    FUN_00341188(uVar7,param_1,0x2c,2,0);
    *(undefined4 *)(param_1 + 0xf60) = 0x10;
    *(undefined2 *)(DAT_00322b2c + param_1) = 0;
    goto switchD_003228d4_default;
  case 8:
    *(undefined4 *)(iVar10 + 0xc) = 10;
    goto switchD_003228d4_default;
  case 9:
    FUN_00341188(uVar1,param_1,0x16,0);
    uVar7 = 0x13;
    break;
  case 10:
    FUN_00341188(uVar7,param_1,0x18,2,0);
    uVar7 = 0x14;
    break;
  case 0xb:
    FUN_00341188(uVar7,param_1,0x1c,2,0);
    uVar7 = 0x16;
    break;
  case 0xc:
    FUN_00341188(uVar7,param_1,0x1e,2,0);
    uVar7 = 0x17;
    break;
  case 0xd:
    FUN_00341188(uVar7,param_1,0x1a,2,0);
    *(undefined4 *)(param_1 + 0xf60) = 0x18;
    goto switchD_003228d4_default;
  case 0xe:
    FUN_00374428(param_1);
  default:
    goto switchD_003228d4_default;
  }
  *(undefined4 *)(param_1 + 0xf60) = uVar7;
switchD_003228d4_default:
  *(uint *)(param_1 + 0x1004) = uVar9;
  return;
}
