// OoT3D decomp @ 003614e0  name=FUN_003614e0  size=520

void FUN_003614e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar7 = DAT_003616f8;
  uVar2 = DAT_003616ec;
  if ((*(ushort *)(param_1 + 0x9c4) & 4) != 0) {
    if (*(float *)(param_2 + 0x2138) == DAT_003616e8) {
      if (*(char *)(param_1 + 0x9c6) == '\0') {
        if ((*(int *)(param_2 + 0x2130) == 0) ||
           (fVar9 = *(float *)(param_2 + 0x20f8) - *(float *)(param_1 + 0x28),
           fVar7 = *(float *)(&DAT_000020fc + param_2) - *(float *)(param_1 + 0x2c),
           fVar8 = *(float *)(param_2 + 0x2100) - *(float *)(param_1 + 0x30),
           (int)SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) < DAT_003616f4)) {
          *(undefined1 *)(param_1 + 0x9c6) = 1;
        }
      }
      else if (*(float *)(param_1 + 0x990) != DAT_003616e8) {
        iVar1 = FUN_003705a0(DAT_003616e8,DAT_003616f8,param_1 + 0x990);
        pfVar5 = (float *)(param_1 + 0x938);
        pfVar4 = (float *)(param_1 + 0x928);
        if (iVar1 == 0) {
          fVar7 = fVar7 / *(float *)(param_1 + 0x990);
          fVar8 = *(float *)(param_2 + 0x2114);
          fVar9 = *(float *)(param_2 + 0x2118);
          fVar10 = *(float *)(param_2 + 0x211c);
          *pfVar4 = *pfVar4 + (*(float *)(param_2 + 0x2110) - *pfVar4) * fVar7;
          *(float *)(param_1 + 0x92c) =
               *(float *)(param_1 + 0x92c) + (fVar8 - *(float *)(param_1 + 0x92c)) * fVar7;
          *(float *)(param_1 + 0x930) =
               *(float *)(param_1 + 0x930) + (fVar9 - *(float *)(param_1 + 0x930)) * fVar7;
          *(float *)(param_1 + 0x934) =
               *(float *)(param_1 + 0x934) + (fVar10 - *(float *)(param_1 + 0x934)) * fVar7;
          fVar8 = *(float *)(param_2 + 0x2124);
          fVar9 = *(float *)(param_2 + 0x2128);
          fVar10 = *(float *)(param_2 + 0x212c);
          *pfVar5 = *pfVar5 + (*(float *)(param_2 + 0x2120) - *pfVar5) * fVar7;
          *(float *)(param_1 + 0x93c) =
               *(float *)(param_1 + 0x93c) + (fVar8 - *(float *)(param_1 + 0x93c)) * fVar7;
          *(float *)(param_1 + 0x940) =
               *(float *)(param_1 + 0x940) + (fVar9 - *(float *)(param_1 + 0x940)) * fVar7;
          *(float *)(param_1 + 0x944) =
               *(float *)(param_1 + 0x944) + (fVar10 - *(float *)(param_1 + 0x944)) * fVar7;
        }
        else {
          uVar2 = *(undefined4 *)(param_2 + 0x2114);
          uVar3 = *(undefined4 *)(param_2 + 0x2118);
          uVar6 = *(undefined4 *)(param_2 + 0x211c);
          *pfVar4 = *(float *)(param_2 + 0x2110);
          *(undefined4 *)(param_1 + 0x92c) = uVar2;
          *(undefined4 *)(param_1 + 0x930) = uVar3;
          *(undefined4 *)(param_1 + 0x934) = uVar6;
          uVar2 = *(undefined4 *)(param_2 + 0x2124);
          uVar3 = *(undefined4 *)(param_2 + 0x2128);
          uVar6 = *(undefined4 *)(param_2 + 0x212c);
          *pfVar5 = *(float *)(param_2 + 0x2120);
          *(undefined4 *)(param_1 + 0x93c) = uVar2;
          *(undefined4 *)(param_1 + 0x940) = uVar3;
          *(undefined4 *)(param_1 + 0x944) = uVar6;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x9c6) = 0;
      *(undefined4 *)(param_1 + 0x990) = uVar2;
      if (*(char *)(param_1 + 0x9c7) == '\0') {
        FUN_00375bcc(param_1,DAT_003616f0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003616e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x9c8))(param_1,param_2);
  return;
}
