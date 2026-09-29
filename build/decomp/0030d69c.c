// OoT3D decomp @ 0030d69c  name=FUN_0030d69c  size=916

int FUN_0030d69c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r10;
  code *extraout_r12;
  code *pcVar5;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;

  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  local_38 = FUN_00485b1c();
  FUN_00485b2c(0);
  if (local_38 == 99) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *DAT_0030da30;
    }
    return 0;
  }
  FUN_00485b64();
  FUN_00485b50();
  do {
    do {
      local_48 = 0;
      cVar1 = '\x01';
      iVar2 = FUN_002ce4cc(&local_3c,&local_40,local_30,local_2c,&local_44,&local_48,param_7,param_8
                          );
      if (DAT_0030da34 != iVar2 * 0x400000) {
        pcVar5 = extraout_r12;
        iVar3 = 0;
        if (-1 < iVar2) {
          pcVar5 = *(code **)(DAT_0030da38 + 0x48);
          iVar3 = DAT_0030da38;
        }
        cVar1 = '\x01';
        if (-1 < iVar2 && pcVar5 != (code *)0x0) {
          cVar1 = (*pcVar5)(*(undefined4 *)(iVar3 + 0x88),local_3c,local_40,local_30,local_2c,
                            local_44,local_48);
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_44;
        }
        unaff_r4 = local_40;
        unaff_r10 = local_3c;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_48;
        }
      }
    } while (cVar1 == '\0');
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = unaff_r10;
    }
    if (iVar2 < 0) goto LAB_0030d810;
  } while ((((unaff_r4 != 1 && unaff_r4 != 0xb) && unaff_r4 != 10) && unaff_r4 != 0xc) &&
          (((unaff_r4 != 0xd && unaff_r4 != 0xf) && unaff_r4 != 0xe) && unaff_r4 != 0x11));
  FUN_00485c98();
LAB_0030d810:
  if (DAT_0030da34 == iVar2 * 0x400000) {
    FUN_002d3470(0);
    return -1;
  }
  iVar2 = FUN_002d37ac();
  if ((iVar2 == 0) && ((local_38 != 3 && unaff_r4 != 0xc) && unaff_r4 != 1)) {
    FUN_002dc008(1);
    iVar2 = FUN_00485be4();
    if (iVar2 < 0) {
      FUN_0030e3ac(iVar2,&DAT_0030da3c,0,&DAT_0030da3c);
      FUN_002fb928(0);
    }
  }
  iVar2 = DAT_0030da38;
  if (unaff_r4 == 0xd) {
    iVar3 = 5;
    FUN_002ce47c();
  }
  else {
    if (unaff_r4 < 0xe) {
      iVar3 = 1;
      if (unaff_r4 != 1) {
        if (unaff_r4 == 10) {
          iVar3 = 2;
        }
        else {
          if (unaff_r4 != 0xb) {
            if (unaff_r4 != 0xc) goto LAB_0030d90c;
            iVar3 = 4;
            FUN_002ce47c();
            FUN_00485b3c();
            goto LAB_0030d954;
          }
          iVar3 = 3;
        }
      }
    }
    else if (unaff_r4 == 0xe) {
      iVar3 = 6;
    }
    else if (unaff_r4 == 0xf) {
      iVar3 = 7;
      *(undefined1 *)(DAT_0030da38 + 1) = 1;
      *(undefined1 *)(iVar2 + 2) = 1;
    }
    else {
      if (unaff_r4 == 0x11) {
        iVar3 = 9;
        goto LAB_0030d954;
      }
LAB_0030d90c:
      iVar3 = 1;
    }
    FUN_002fa148(1);
    if (local_38 == 0xe || local_38 == 5) {
      FUN_0048a4f0(1);
    }
    if (((((((iVar3 != 1 && iVar3 != 2) && iVar3 != 3) && iVar3 != 4) && iVar3 != 5) && iVar3 != 7)
         && iVar3 != 6) && (iVar3 != 9)) goto LAB_0030d99c;
  }
LAB_0030d954:
  uVar4 = 4;
  iVar2 = FUN_002d37ac();
  if (iVar2 == 0) {
    uVar4 = 0x14;
  }
  else if (iVar2 == 1) {
    uVar4 = 0x24;
  }
  else if (iVar2 == 2) {
    uVar4 = 0x44;
  }
  else if (iVar2 == 3) {
    uVar4 = 0x84;
  }
  FUN_002d3470(uVar4);
  FUN_002d3444();
LAB_0030d99c:
  if (((local_38 == 0xe || local_38 == 4) || local_38 == 5) || local_38 == 0x12) {
    if (iVar3 != 4 && iVar3 != 5) {
      FUN_002dc008(1);
    }
    iVar2 = FUN_002d37ac();
    if (iVar2 == 0) {
      *(undefined1 *)(DAT_0030da38 + 1) = 0;
      FUN_002d3470(1);
      FUN_002d3444();
    }
  }
  return iVar3;
}
