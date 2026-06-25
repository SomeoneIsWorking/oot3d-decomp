// OoT3D decomp @ 003318bc  name=FUN_003318bc  size=500

undefined4 FUN_003318bc(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  
  iVar3 = DAT_00331ac8;
  if (*(char *)(DAT_00331ac8 + 0x4e) != '\0') {
    iVar4 = (int)*(char *)(DAT_00331ac8 + 0x47);
    iVar6 = (int)*(short *)(DAT_00331ac8 + 0x1584);
    iVar2 = param_3 + -5;
    if (param_3 != 5) {
      iVar2 = iVar4 - param_2;
    }
    if (iVar2 < 0 == (param_3 == 5 && SBORROW4(param_3,5))) {
      sVar5 = *(short *)(DAT_00331ac8 + 0x1580);
      sVar1 = (short)*(char *)(DAT_00331ac8 + 0x47) - (short)param_2;
      switch(param_3) {
      case 0:
      case 2:
        if (sVar5 != 0) {
          if (sVar5 != 7) {
LAB_00331a60:
            FUN_0037547c(DAT_00331acc,0,4,DAT_00331ad4,DAT_00331ad4,DAT_00331ad0);
            return 0;
          }
          *(undefined *)(param_1 + 0x208f) = 0;
        }
        *(short *)(iVar3 + 0x1588) = sVar1;
        *(undefined2 *)(iVar3 + 0x1580) = 1;
        return 1;
      case 1:
        if (sVar5 != 0) {
          if (sVar5 != 7) goto LAB_00331a60;
          *(undefined *)(param_1 + 0x208f) = 0;
        }
        *(short *)(iVar3 + 0x1588) = sVar1;
        *(undefined2 *)(iVar3 + 0x1580) = 6;
        return 1;
      case 3:
        if (sVar5 == 0) {
          if (iVar4 != 0) {
            fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00331ad8 + 0x110),
                                               (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(DAT_00331ae4 + param_1 + 0x2ba4) =
                 (short)(int)(DAT_00331adc / fVar7 + DAT_00331ae0);
            *(undefined2 *)(iVar3 + 0x1580) = 7;
            return 1;
          }
        }
        else if (sVar5 == 7) {
          return 1;
        }
        break;
      case 4:
        if (sVar5 != 0) {
          if (sVar5 != 7) goto LAB_00331a60;
          *(undefined *)(param_1 + 0x208f) = 0;
        }
        *(short *)(iVar3 + 0x1588) = sVar1;
        *(undefined2 *)(iVar3 + 0x1580) = 4;
        return 1;
      case 5:
        if (iVar4 <= iVar6) {
          sVar1 = (short)*(char *)(DAT_00331ac8 + 0x47) + (short)param_2;
          sVar5 = *(short *)(DAT_00331ac8 + 0x1584);
          if (sVar1 <= iVar6) {
            sVar5 = sVar1;
          }
          *(short *)(DAT_00331ac8 + 0x1588) = sVar1;
          *(short *)(iVar3 + 0x1588) = sVar5;
          *(undefined2 *)(iVar3 + 0x1580) = 10;
          return 1;
        }
      }
    }
    else if (iVar6 != 0) {
      FUN_0037547c(DAT_00331acc,0,4,DAT_00331ad4,DAT_00331ad4,DAT_00331ad0);
    }
  }
  return 0;
}

