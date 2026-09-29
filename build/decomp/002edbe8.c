// OoT3D decomp @ 002edbe8  name=FUN_002edbe8  size=2096

void FUN_002edbe8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;

  uVar7 = DAT_002edf10;
  uVar6 = DAT_002edf0c;
  iVar5 = DAT_002edf08;
  uVar4 = DAT_002edf04;
  uVar3 = DAT_002edf00;
  uVar2 = DAT_002edefc;
  iVar1 = DAT_002edef8;
  iVar11 = *(int *)(DAT_002edef8 + 0x10);
  uVar8 = *(undefined4 *)(DAT_002edef8 + 0x30);
  if (iVar11 == 0xf) {
switchD_002edc34_caseD_d:
    iVar11 = 0;
    do {
      iVar9 = *(int *)(iVar1 + 0x14);
      bVar13 = iVar11 != iVar9;
      if (bVar13) {
        iVar9 = *(int *)(iVar5 + iVar11 * 4);
      }
      if (bVar13 && iVar9 != 0) {
        local_3c = uVar7;
        iVar9 = iVar11 * 0x25 + 9;
        do {
          FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar11 * 0x25 + 0x2b);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
  }
  else {
    if (0xf < iVar11) {
      if (iVar11 != 0x25) {
        if (iVar11 < 0x26) {
          if ((iVar11 == 0x11 || iVar11 == 0x12) || iVar11 == 0x16) {
            local_38 = DAT_002edf00;
            if (*(int *)(DAT_002edf08 + 0x24) == 0) {
              local_34 = DAT_002edf00;
              FUN_002f9430(uVar8,&local_38,1,0x97);
            }
            else {
              local_34 = DAT_002edefc;
              FUN_002f9430(uVar8,&local_38,1,0x97);
              local_34 = uVar3;
              iVar11 = 0x98;
              do {
                FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
                iVar11 = iVar11 + 1;
              } while (iVar11 < 0x9b);
              local_3c = uVar7;
              FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x97);
            }
            local_38 = uVar3;
            if (*(int *)(iVar5 + 0x28) == 0) {
              local_34 = uVar3;
              FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,0x9e);
            }
            else {
              local_34 = uVar2;
              FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,0x9e);
              local_34 = uVar3;
              iVar11 = 0x9f;
              do {
                FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
                iVar11 = iVar11 + 1;
              } while (iVar11 < 0xa2);
              local_3c = uVar7;
              FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x9e);
            }
            goto switchD_002edc34_caseD_5;
          }
          if (iVar11 != 0x22) goto switchD_002edc34_caseD_5;
          goto switchD_002edc34_caseD_7;
        }
        if (((iVar11 != 0x26 && iVar11 != 0x27) && iVar11 != 0x29) && iVar11 != 0x2a)
        goto switchD_002edc34_caseD_5;
      }
      local_38 = DAT_002edf00;
      if (*(int *)(DAT_002edf08 + 0x1c) == 0) {
        local_34 = DAT_002edf00;
        FUN_002f9430(uVar8,&local_38,1,0x89);
      }
      else {
        local_34 = DAT_002edefc;
        FUN_002f9430(uVar8,&local_38,1,0x89);
        local_34 = uVar3;
        iVar11 = 0x8a;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x8d);
        local_3c = uVar7;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x89);
      }
      local_38 = uVar3;
      if (*(int *)(iVar5 + 0x20) == 0) {
        local_34 = uVar3;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,0x90);
      }
      else {
        local_34 = uVar2;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,0x90);
        local_34 = uVar3;
        iVar11 = 0x91;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x94);
        local_3c = uVar7;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x90);
      }
      goto switchD_002edc34_caseD_5;
    }
    switch(iVar11) {
    case 2:
    case 3:
    case 4:
      iVar11 = 0;
      do {
        if (*(int *)(iVar5 + iVar11 * 4) != 0) {
          local_3c = uVar7;
          iVar9 = iVar11 * 0x25 + 9;
          do {
            FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,iVar9);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar11 * 0x25 + 0x2b);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 3);
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xc:
switchD_002edc34_caseD_7:
      if (*(int *)(DAT_002edf08 + 0x10) == 0) {
        iVar11 = FUN_002d1aec(uVar8,0x7d);
        *(undefined4 *)(iVar11 + 4) = uVar3;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),iVar11,1,0x7d);
        local_38 = uVar4;
        local_34 = uVar3;
        iVar11 = 0xaf;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb2);
        local_3c = uVar6;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x7d);
      }
      else {
        iVar11 = FUN_002d1aec(uVar8,0x7d);
        *(undefined4 *)(iVar11 + 4) = uVar2;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),iVar11,1,0x7d);
        local_38 = uVar3;
        local_34 = uVar3;
        iVar11 = 0xaf;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb2);
        local_3c = uVar7;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x7d);
      }
      if (*(int *)(iVar5 + 0x14) == 0) {
        iVar11 = FUN_002d1aec(*(undefined4 *)(iVar1 + 0x30),0x81);
        *(undefined4 *)(iVar11 + 4) = uVar3;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),iVar11,1,0x81);
        local_38 = uVar4;
        local_34 = uVar3;
        iVar11 = 0xb2;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb5);
        local_3c = uVar6;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x81);
      }
      else {
        puVar10 = (undefined4 *)FUN_002d1aec(*(undefined4 *)(iVar1 + 0x30),0x81);
        puVar10[1] = uVar2;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),puVar10,1,0x81);
        local_38 = *puVar10;
        iVar11 = 0xb2;
        local_34 = uVar3;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb5);
        local_3c = uVar7;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x81);
      }
      if (*(int *)(iVar5 + 0x18) == 0) {
        iVar11 = FUN_002d1aec(*(undefined4 *)(iVar1 + 0x30),0x85);
        *(undefined4 *)(iVar11 + 4) = uVar3;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),iVar11,1,0x85);
        local_38 = uVar4;
        local_34 = uVar3;
        iVar11 = 0xb5;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb8);
        local_3c = uVar6;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x85);
      }
      else {
        puVar10 = (undefined4 *)FUN_002d1aec(*(undefined4 *)(iVar1 + 0x30),0x85);
        puVar10[1] = uVar2;
        FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),puVar10,1,0x85);
        local_38 = *puVar10;
        iVar11 = 0xb5;
        local_34 = uVar3;
        do {
          FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0xb8);
        local_3c = uVar7;
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x85);
      }
      break;
    case 0xd:
    case 0xe:
      goto switchD_002edc34_caseD_d;
    }
  }
switchD_002edc34_caseD_5:
  if (*(int *)(iVar5 + 0x24) == 0) {
    local_38 = uVar4;
    local_34 = uVar3;
    iVar11 = 0x98;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x9b);
    local_3c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x97);
  }
  if (*(int *)(iVar5 + 0x28) == 0) {
    local_38 = uVar4;
    local_34 = uVar3;
    iVar11 = 0x9f;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0xa2);
    local_3c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x9e);
  }
  if (*(int *)(iVar5 + 0x1c) == 0) {
    local_38 = uVar4;
    local_34 = uVar3;
    iVar11 = 0x8a;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x8d);
    local_3c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x89);
  }
  if (*(int *)(iVar5 + 0x20) == 0) {
    local_38 = uVar4;
    local_34 = uVar3;
    iVar11 = 0x91;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x30),&local_38,1,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x94);
    local_3c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,0x90);
  }
  uVar12 = 0;
  do {
    if (*(int *)(iVar5 + uVar12 * 4) == 0) {
      if (uVar12 < 3) {
        local_3c = uVar6;
        iVar11 = uVar12 * 0x25 + 9;
        do {
          FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uVar12 * 0x25 + 0x2b));
      }
    }
    else if (uVar12 < 3) {
      local_3c = uVar7;
      iVar11 = uVar12 * 0x25 + 9;
      do {
        FUN_002fcdec(*(undefined4 *)(iVar1 + 0x30),&local_3c,1,iVar11);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uVar12 * 0x25 + 0x2b));
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0xb);
  return;
}
