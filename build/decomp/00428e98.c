// OoT3D decomp @ 00428e98  name=FUN_00428e98  size=1556

undefined4 FUN_00428e98(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  bool bVar9;
  float fVar10;
  undefined8 uVar11;

  *param_1 = param_2;
  uVar4 = DAT_004294e0;
  fVar3 = DAT_004294dc;
  iVar2 = DAT_004291b8;
  puVar1 = DAT_004291a4;
  uVar7 = param_1[2];
  if (uVar7 == 0) {
    uVar7 = FUN_002fc0c8(s_data__0042919c);
    param_1[7] = uVar7;
    if ((int)uVar7 < 0) {
      if (-1 < (int)uVar7) {
        return 0;
      }
    }
    else if ((0 < (int)param_1[5]) || (*(int *)(*param_1 + 0x14) != 0xc03)) {
      param_1[2] = 0xb;
      return 0;
    }
    param_1[2] = 1;
  }
  else if (uVar7 == 1) {
    if ((*DAT_004291a4 & 1) == 0) {
      uVar11 = FUN_003679b4(DAT_004291a4);
      param_2 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        FUN_0036788c(DAT_004291a8);
        param_2 = DAT_004291b0;
      }
    }
    iVar2 = DAT_004291b4;
    if (*(char *)(DAT_004291b4 + 0xc) == '\0') {
      if ((*puVar1 & 1) == 0) {
        uVar11 = FUN_003679b4(DAT_004291a4,param_2);
        param_2 = (uint)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 != 0) {
          FUN_0036788c(DAT_004291a8);
          param_2 = DAT_004291b0;
        }
      }
      iVar8 = FUN_002f4350(iVar2,param_2);
      if (iVar8 == 0) {
        if (((*puVar1 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_004291a4), iVar8 != 0)) {
          FUN_0036788c(DAT_004291a8);
        }
        FUN_002f41f8(iVar2,0);
        param_1[2] = 2;
      }
    }
    else {
      param_1[2] = 2;
    }
  }
  else if (uVar7 == 2) {
    if ((int)param_1[7] < 0) {
      if ((int)param_1[7] < 0) {
        SaveDataMaintainer_002f36f4(param_1);
        FUN_00440ff4(param_1,param_1[7]);
        if (((*puVar1 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_004291a4), iVar8 != 0)) {
          FUN_0036788c(DAT_004291a8);
        }
        *(undefined1 *)(iVar2 + 0x21) = 1;
      }
    }
    else {
      SaveDataMaintainer_002f36f4(param_1);
      param_1[2] = 5;
    }
  }
  else if (uVar7 == 5) {
    if (((*DAT_004291bc & 1) == 0) && (iVar8 = FUN_003679b4(DAT_004291bc), iVar8 != 0)) {
      FUN_0031ff30(DAT_004291c0);
    }
    if (*(char *)(DAT_004291c0 + 0x488) == '\x04') {
      param_1[2] = 7;
      *(undefined1 *)((int)param_1 + 5) = 3;
      *(undefined1 *)((int)param_1 + 7) = 0;
      (**(code **)(*(int *)param_1[0x26a] + 0x14))();
      if (((*puVar1 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_004291a4), iVar8 != 0)) {
        FUN_0036788c(DAT_004291a8);
      }
      *(undefined1 *)(iVar2 + 0x21) = 0;
    }
    else {
      software_interrupt(10);
    }
  }
  else {
    if (uVar7 == 3) {
      fVar10 = (float)param_1[0xb] - DAT_004294d8;
      param_1[0xb] = (uint)fVar10;
      if (fVar10 <= fVar3) {
        fVar10 = fVar3;
      }
      param_1[0xb] = (uint)fVar10;
      uVar11 = FUN_00447050();
      param_2 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        FUN_00435250();
        FUN_002f3684();
        param_1[2] = 4;
        param_2 = extraout_r1;
      }
    }
    else if (uVar7 == 4) {
      uVar11 = FUN_002f360c();
      param_2 = (uint)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        uVar7 = param_1[3];
        if (uVar7 == 1) {
          param_1[2] = 10;
          param_1[4] = 10;
          param_1[0xb] = (uint)fVar3;
        }
        else if ((uVar7 == 2 || uVar7 == 3) || uVar7 == 0) {
          param_1[2] = 6;
          *(undefined1 *)((int)param_1 + 5) = 2;
          *(undefined1 *)((int)param_1 + 6) = 1;
        }
        if ((*puVar1 & 1) == 0) {
          uVar11 = FUN_003679b4(DAT_004291a4);
          param_2 = (uint)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 != 0) {
            FUN_0036788c(DAT_004291a8);
            param_2 = DAT_004291b0;
          }
        }
        *(undefined1 *)(iVar2 + 0x21) = 0;
      }
    }
    else {
      if (uVar7 == 6) {
        if (param_1[0x26b] == 0) {
          uVar7 = param_1[0x265];
          if (*(char *)(uVar7 + 0x1c) == '\0') {
            bVar9 = *(int *)(uVar7 + 0x14) != 3;
            if (bVar9) {
              param_2 = *(uint *)(param_2 + 0x18);
            }
            if (bVar9 && (param_2 & 0xb) != 0) {
              param_1[0x26b] = uVar7;
              uVar5 = DAT_004294e4;
              *(float *)(*(int *)(uVar7 + 4) + 4) =
                   *(float *)(*(int *)(uVar7 + 4) + 4) + DAT_004294ec;
              uVar6 = DAT_004294f0;
              *(undefined4 *)(*(int *)(uVar7 + 4) + 0x34) = DAT_004294f0;
              *(undefined4 *)(*(int *)(uVar7 + 4) + 0x30) = uVar6;
              *(undefined4 *)(*(int *)(uVar7 + 4) + 0x2c) = uVar6;
              **(undefined4 **)(uVar7 + 8) = **(undefined4 **)(uVar7 + 4);
              *(undefined4 *)(*(int *)(uVar7 + 8) + 0x38) = DAT_004294f4;
              *(undefined4 *)(uVar7 + 0x14) = 1;
              *(undefined4 *)(uVar7 + 0x18) = 6;
              FUN_0037547c(uVar4,0,4,DAT_004294e8,DAT_004294e8,uVar5);
            }
          }
          else {
            param_1[0x26b] = uVar7;
            FUN_0037547c(uVar4,0,4,DAT_004294e8,DAT_004294e8,DAT_004294e4);
          }
        }
        else if (*(int *)(param_1[0x26b] + 0x18) < 1) {
          param_1[2] = 10;
          param_1[4] = 10;
          param_1[0x26b] = 0;
        }
        (**(code **)(*(int *)param_1[0x265] + 8))();
        FUN_002f3370(param_1);
        return 0;
      }
      if (uVar7 != 10) {
        if (uVar7 == 0xb) {
          FUN_003071d0();
          return 1;
        }
        if (uVar7 == 7) {
          fVar10 = (float)param_1[0xb] - DAT_004294d8;
          param_1[0xb] = (uint)fVar10;
          if (fVar10 <= fVar3) {
            fVar10 = fVar3;
          }
          param_1[0xb] = (uint)fVar10;
          FUN_00440aa4(param_1);
          FUN_002f3078(param_1);
          return 0;
        }
        if (uVar7 != 8) {
          return 0;
        }
        fVar10 = (float)param_1[0xb] - DAT_004294d8;
        param_1[0xb] = (uint)fVar10;
        if (fVar10 <= fVar3) {
          fVar10 = fVar3;
        }
        param_1[0xb] = (uint)fVar10;
        FUN_00440d4c(param_1);
        FUN_002f3078(param_1);
        return 0;
      }
      param_1[0xb] = (uint)((float)param_1[0xb] + DAT_004294f8);
      uVar7 = param_1[4];
      param_1[4] = uVar7 - 1;
      if ((int)(uVar7 - 1) < 1) {
        param_1[2] = 0;
        FUN_003071d0();
        param_2 = extraout_r1_00;
      }
    }
    FUN_002f3370(param_1,param_2);
  }
  return 0;
}
