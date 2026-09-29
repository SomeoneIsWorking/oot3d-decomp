// OoT3D decomp @ 003462ac  name=FUN_003462ac  size=252

void FUN_003462ac(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;

  iVar2 = (int)*(short *)(param_1 + 0x104);
  if (iVar2 != 0x34) {
    if (iVar2 < 0x35) {
      switch(iVar2) {
      case 0:
      case 0x11:
      case 0x14:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2d:
        goto switchD_003462c8_caseD_0;
      default:
        goto switchD_003462c8_caseD_1;
      case 2:
      case 0x13:
switchD_003462c8_caseD_2:
        uVar1 = 0x4000;
        goto LAB_003464a8;
      case 4:
      case 0x12:
      case 0x15:
        goto switchD_003462c8_caseD_4;
      case 6:
      case 0x17:
switchD_003462c8_caseD_6:
        uVar1 = 0x6000;
        goto LAB_003464a8;
      case 7:
      case 0x18:
      case 0x2a:
      case 0x2b:
        goto switchD_003462c8_caseD_7;
      case 0x1b:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
switchD_003462c8_caseD_1b:
        uVar1 = 0x7000;
        goto LAB_003464a8;
      }
    }
    if (iVar2 != 0x56) {
      if (0x56 < iVar2) {
        if (iVar2 == 0x5f) goto switchD_003462c8_caseD_1b;
        if (iVar2 < 0x60) {
          switch(iVar2) {
          case 0x57:
          case 0x5a:
          case 0x5c:
            goto switchD_003462c8_caseD_6;
          case 0x58:
          case 0x59:
            goto switchD_003462c8_caseD_2;
          case 0x5b:
            goto switchD_003462c8_caseD_0;
          }
        }
        else {
          if (iVar2 == 0x62) {
switchD_003462c8_caseD_4:
            uVar1 = 0x3000;
            goto LAB_003464a8;
          }
          if (iVar2 < 99) {
            if (iVar2 == 0x60 || iVar2 == 0x61) goto switchD_003462c8_caseD_4;
          }
          else {
            if (iVar2 == 99) goto switchD_003463b0_caseD_36;
            if (iVar2 == 0x71) goto switchD_003462c8_caseD_0;
          }
        }
        goto switchD_003462c8_caseD_1;
      }
      if (iVar2 != 0x48) {
        if (0x48 < iVar2) {
          switch(iVar2) {
          case 0x51:
            goto switchD_003463b0_caseD_36;
          case 0x52:
          case 0x53:
            goto switchD_003462c8_caseD_7;
          case 0x54:
            goto switchD_003462c8_caseD_2;
          case 0x55:
            goto switchD_003462c8_caseD_0;
          default:
            goto switchD_003462c8_caseD_1;
          }
        }
        switch(iVar2) {
        case 0x35:
        case 0x3a:
        case 0x3f:
          break;
        case 0x36:
switchD_003463b0_caseD_36:
          uVar1 = 0x2000;
          goto LAB_003464a8;
        case 0x37:
        case 0x39:
          goto switchD_003462c8_caseD_6;
        default:
switchD_003462c8_caseD_1:
          uVar1 = 0;
          goto LAB_003464a8;
        }
      }
switchD_003462c8_caseD_7:
      uVar1 = 0x5000;
      goto LAB_003464a8;
    }
  }
switchD_003462c8_caseD_0:
  uVar1 = 0x1000;
LAB_003464a8:
  *(ushort *)(param_2 + 0x116) = uVar1 | param_3;
  return;
}
