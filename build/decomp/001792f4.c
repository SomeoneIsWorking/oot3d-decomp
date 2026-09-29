// OoT3D decomp @ 001792f4  name=FUN_001792f4  size=784

void FUN_001792f4(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  *(undefined2 *)(param_1 + 0x858) = 0;
  iVar12 = DAT_00179618;
  fVar3 = DAT_00179614;
  iVar10 = DAT_00179610;
  fVar2 = DAT_0017960c;
  iVar1 = DAT_00179608;
  psVar9 = *(short **)(DAT_00179604 + param_2);
  if (psVar9 != (short *)0x0) {
    iVar11 = DAT_00179610 + 0x8a0000;
    do {
      if (*psVar9 == 0x19) {
        if (((int)ABS(*(float *)(psVar9 + 0x14) - fVar2) < iVar10) &&
           ((int)ABS(*(float *)(psVar9 + 0x18) - fVar3) < iVar11)) {
          if (*(short *)(param_1 + 0x85c) == 0) {
            *(ushort *)(iVar1 + 0x42) =
                 *(ushort *)(iVar1 + 0x42) |
                 *(ushort *)(iVar12 + *(short *)(DAT_0017961c + (int)psVar9) * 2);
          }
          *(short *)(param_1 + 0x858) = *(short *)(param_1 + 0x858) + 1;
        }
        else if (*(short *)(param_1 + 0x85c) == 0) {
          *(ushort *)(iVar1 + 0x42) =
               *(ushort *)(iVar1 + 0x42) &
               ~*(ushort *)(iVar12 + *(short *)(DAT_0017961c + (int)psVar9) * 2);
        }
      }
      psVar9 = *(short **)(psVar9 + 0x98);
    } while (psVar9 != (short *)0x0);
  }
  iVar12 = (int)*(short *)(param_1 + 0x858);
  iVar10 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar10 == 0) || (iVar10 = FUN_003769d8(param_2 + 0x28a0), iVar10 == 6)) {
    *(undefined2 *)(param_1 + 0x85e) = 0x65;
  }
  if (*(short *)(param_1 + 0x858) < 7) {
    if (*(short *)(param_1 + 0x85c) != 0 && iVar12 < 7) {
      iVar12 = 9;
    }
  }
  else {
    iVar12 = 8;
    if ((*(short *)(param_1 + 0x85c) < 2) && (*(short *)(param_1 + 0x85c) == 0)) {
      iVar12 = 7;
    }
  }
  *(undefined2 *)(param_1 + 0x116) = *(undefined2 *)(DAT_00179620 + iVar12 * 2);
  iVar10 = FUN_0036bba8(param_2,8);
  if (iVar10 != 0) {
    uVar7 = FUN_0036bba8(param_2,8);
    *(undefined2 *)(param_1 + 0x116) = uVar7;
    *(undefined2 *)(param_1 + 0x852) = 6;
  }
  if (*(short *)(param_1 + 0x85c) != 0 && iVar12 != 9) {
    iVar12 = 10;
    *(undefined2 *)(param_1 + 0x85e) = 0xb;
  }
  iVar10 = FUN_0036bc98(param_1,param_2);
  if (iVar10 == 0) {
    FUN_0036bb28(DAT_00179638,param_1,param_2);
    return;
  }
  iVar10 = FUN_0036bba8(param_2,8);
  uVar6 = DAT_00179634;
  uVar5 = DAT_00179628;
  uVar4 = DAT_00179624;
  if (iVar10 == 0) {
    if (*(short *)(param_1 + 0x116) == 0x503c) {
      FUN_0037547c(DAT_00179624,0,4,DAT_00179630,DAT_00179630,DAT_0017962c);
      *(undefined2 *)(param_1 + 0x85c) = 2;
      *(undefined2 *)(param_1 + 0x852) = 5;
    }
    else {
      *(short *)(param_1 + 0x85e) = (short)iVar12 + 1;
      if (iVar12 != 7) {
        if (*(short *)(param_1 + 0x85a) != *(short *)(param_1 + 0x858)) {
          if (*(short *)(param_1 + 0x858) < *(short *)(param_1 + 0x85a)) {
            FUN_0037547c(uVar4,0,4,DAT_00179630,DAT_00179630,DAT_0017962c);
          }
          else if (iVar12 < 8) {
            FUN_00372244(param_2 + 0x5fcc,0x1e,uVar6);
          }
        }
        sVar8 = *(short *)(param_1 + 0x85a);
        if (*(short *)(param_1 + 0x85a) <= *(short *)(param_1 + 0x858)) {
          sVar8 = *(short *)(param_1 + 0x858);
        }
        *(short *)(param_1 + 0x85a) = sVar8;
        return;
      }
      FUN_00372244(param_2 + 0x5fcc,0x1e,uVar6);
      *(undefined2 *)(param_1 + 0x85c) = 1;
      *(undefined2 *)(param_1 + 0x852) = 5;
      *(undefined2 *)(param_1 + 0x85a) = *(undefined2 *)(param_1 + 0x858);
      *(ushort *)(iVar1 + 0x42) = *(ushort *)(iVar1 + 0x42) & 0x1ff;
    }
    *(undefined4 *)(param_1 + 0x840) = uVar5;
  }
  return;
}
