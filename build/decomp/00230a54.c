// OoT3D decomp @ 00230a54  name=FUN_00230a54  size=412

void FUN_00230a54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;

  *(undefined1 *)(param_1 + 0xc3e) = 7;
  switch(*(undefined2 *)(DAT_00230c44 + param_2)) {
  default:
    goto switchD_00230a78_caseD_0;
  case 1:
    if (*(char *)(DAT_00230c5c + 0xe) == '\0') {
      switch(*(undefined1 *)(param_2 + 0x2ba0)) {
      case 0:
        goto switchD_00230b6c_caseD_1;
      case 1:
        goto switchD_00230b6c_caseD_0;
      case 2:
        goto switchD_00230b6c_caseD_4;
      case 3:
        goto switchD_00230b6c_caseD_3;
      case 4:
        goto switchD_00230b6c_caseD_2;
      }
    }
    else {
      switch(*(undefined1 *)(param_2 + 0x2ba0)) {
      case 0:
switchD_00230b6c_caseD_0:
        FUN_00340b34(param_1,4);
        break;
      case 1:
switchD_00230b6c_caseD_1:
        FUN_00340b34(param_1,3);
        break;
      case 2:
switchD_00230b6c_caseD_2:
        FUN_00340b34(param_1,2);
        break;
      case 3:
switchD_00230b6c_caseD_3:
        FUN_00340b34(param_1,0);
        break;
      case 4:
switchD_00230b6c_caseD_4:
        FUN_00340b34(param_1,1);
      }
    }
    goto switchD_00230a78_caseD_0;
  case 4:
    FUN_003725e0();
    uVar3 = DAT_00230c4c;
    uVar2 = DAT_00230c48;
    *(undefined4 *)(param_1 + 0xc44) = 0;
    FUN_0037547c(DAT_00230c50,0,4,uVar3,uVar3,uVar2);
    FUN_003523dc(0);
    puVar4 = DAT_00230c54;
    *DAT_00230c54 = 0xc;
    iVar6 = 0;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(*(int *)(puVar4 + iVar1 + 4) + 0xc64) = 0;
    } while (iVar6 < 5);
    *(undefined4 *)(param_1 + 0xc04) = DAT_00230c58;
switchD_00230a78_caseD_0:
    if (*(char *)(param_1 + 0xc3e) == '\a') {
      return;
    }
    goto LAB_00230c2c;
  case 5:
    uVar5 = 2;
    break;
  case 6:
    uVar5 = 1;
    break;
  case 7:
    uVar5 = 0;
    break;
  case 8:
    uVar5 = 3;
    break;
  case 9:
    uVar5 = 4;
    break;
  case 10:
    uVar5 = 5;
  }
  *(undefined1 *)(param_1 + 0xc3e) = uVar5;
LAB_00230c2c:
  *(undefined4 *)(param_1 + 0xc28) = 0;
  *(undefined4 *)(param_1 + 0xc04) = DAT_00230c60;
  return;
}
