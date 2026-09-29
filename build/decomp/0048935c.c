// OoT3D decomp @ 0048935c  name=FUN_0048935c  size=528

undefined4 FUN_0048935c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;

  iVar2 = FUN_0036b4ec();
  iVar5 = DAT_0048956c;
  if (iVar2 != 0) {
LAB_0048940c:
    FUN_0035d27c(param_1,*(undefined4 *)(DAT_00489578 + *(char *)(param_1 + 0x1a9) * 4));
    *(undefined2 *)(DAT_0048957c + param_1) = 0;
    *(undefined1 *)(param_1 + 0x1748) = 0;
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar5 + 0x4c);
                    /* WARNING: Could not recover jumptable at 0x0048944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(DAT_00489580 + param_1))(param_1,param_2);
    return uVar4;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x1aa);
  if (uVar3 < 0xfe) {
    if (uVar3 == 0xfc) {
      cVar1 = '\x01';
    }
    else if (uVar3 == 0x59) {
      cVar1 = '\x02';
    }
    else {
      cVar1 = *(char *)(DAT_00489570 + uVar3);
    }
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 == *(char *)(param_1 + 0x1a9)) {
    if ((*(int *)(DAT_0048956c + 0x4c) == 0) &&
       ((*(char *)(param_1 + 0x1b3) == '\x03' || (*(char *)(DAT_00489574 + param_2) != '\0')))) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    *(int *)(DAT_0048956c + 0x4c) = iVar2;
    if (iVar2 != 0) goto LAB_0048940c;
  }
  iVar5 = FUN_0034d628(param_1);
  if (*(int *)(param_1 + 0x284) == iVar5) {
LAB_00489490:
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(DAT_00489584 + *(char *)(param_1 + 0x1b2) * 8 + 4),
                              (byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(param_1 + 0x17a4) < DAT_00489588) {
      fVar7 = fVar7 - DAT_0048958c;
    }
    iVar5 = FUN_0036b1e0(fVar7,param_1 + 0x1764);
    if (iVar5 != 0) {
      FUN_002c3844(param_2,param_1);
    }
    FUN_00349574(param_1);
    uVar4 = FUN_0034d628(param_1);
    FUN_003604f0(param_1 + 0x254,param_2,uVar4);
    *(undefined1 *)(param_1 + 0x1748) = 0;
  }
  else {
    piVar6 = (int *)(DAT_00489584 + -0x78);
    iVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x284) == *piVar6) {
        if (iVar5 != -1) goto LAB_00489490;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 0x1e);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(DAT_00489584 + *(char *)(param_1 + 0x1b2) * 8 + 4),
                              (byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(param_1 + 0x17a4) < DAT_00489588) {
      fVar7 = fVar7 - DAT_0048958c;
    }
    iVar5 = FUN_0036b1e0(fVar7,param_1 + 0x1764);
    if (iVar5 != 0) {
      FUN_002c3844(param_2,param_1);
    }
    FUN_00349574(param_1);
  }
  return 1;
}
