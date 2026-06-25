// OoT3D decomp @ 002f8d74  name=FUN_002f8d74  size=320

void FUN_002f8d74(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = (int)((ulonglong)((longlong)DAT_002f8ed0 * (longlong)param_3) >> 0x20);
  iVar3 = (int)((ulonglong)((longlong)DAT_002f8ed0 * (longlong)param_3) >> 0x20);
  local_18 = VectorSignedToFloat((param_3 + ((iVar2 >> 1) - (iVar2 >> 0x1f)) * -0xc) * 0x2a,
                                 (byte)(in_fpscr >> 0x15) & 3);
  local_14 = VectorSignedToFloat(((iVar3 >> 1) - (iVar3 >> 0x1f)) * 0x2a,
                                 (byte)(in_fpscr >> 0x15) & 3);
  if (param_3 == 0xff) {
    local_1c = DAT_002f8ed4;
  }
  else {
    local_1c = DAT_002f8ed8;
  }
  local_20 = local_1c;
  FUN_002fc40c(*(undefined4 *)(param_1 + 0x10c),&local_18,&local_20,1,param_2);
  iVar3 = DAT_002f8ee0;
  iVar2 = DAT_002f8edc;
  if (1 < *(int *)(param_1 + 0x428)) {
    return;
  }
  iVar4 = param_1 + param_2 * 4;
  if (*(int *)(iVar4 + 0xc) == 0) {
    return;
  }
  *(int *)(iVar4 + 0x228) = param_3;
  if (param_3 == 9) {
switchD_002f8e44_caseD_0:
    bVar1 = *(byte *)(iVar2 + param_3);
  }
  else {
    switch(param_3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
      goto switchD_002f8e44_caseD_0;
    case 4:
    case 5:
switchD_002f8e44_caseD_4:
      iVar2 = -1;
      goto LAB_002f8e98;
    default:
      if (param_3 == 0x10) goto switchD_002f8e44_caseD_0;
      if ((param_3 != 0x38 && param_3 != 0x39) && param_3 != 0x3a) goto switchD_002f8e44_caseD_4;
      bVar1 = *(byte *)(iVar2 + 3);
    }
  }
  iVar2 = (int)*(char *)((uint)bVar1 + iVar3);
LAB_002f8e98:
  *(int *)(iVar4 + 0x328) = iVar2;
  if (iVar2 == -1) {
    *(undefined *)(param_1 + param_2 + 0x434) = 0;
  }
  else {
    *(undefined *)(param_1 + param_2 + 0x434) = 1;
    FUN_002fcb04(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x328),0);
  }
  return;
}

