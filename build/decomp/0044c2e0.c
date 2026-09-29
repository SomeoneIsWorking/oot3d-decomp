// OoT3D decomp @ 0044c2e0  name=FUN_0044c2e0  size=828

void FUN_0044c2e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;

  uVar6 = DAT_0044c630;
  uVar5 = DAT_0044c62c;
  uVar4 = DAT_0044c628;
  uVar3 = DAT_0044c624;
  uVar2 = DAT_0044c620;
  uVar1 = DAT_0044c61c;
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar9 = FUN_0033f428(0xa8,0x2e,0x8a,0xb8);
    *(bool *)(param_1 + 0xd) = iVar9 != 0;
    uVar7 = DAT_0044c638;
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_0037547c(uVar3,0,4,uVar7);
      FUN_002e7818(param_1);
      *(undefined4 *)(param_1 + 0x274) = uVar1;
      *(undefined4 *)(param_1 + 0x2b0) = uVar1;
      *(undefined4 *)(param_1 + 0x2ec) = uVar2;
      *(undefined4 *)(param_1 + 0x328) = uVar2;
      *(undefined4 *)(param_1 + 0x364) = uVar1;
      *(undefined4 *)(param_1 + 0x3a0) = uVar1;
      *(undefined4 *)(param_1 + 0x3dc) = uVar2;
      *(undefined4 *)(param_1 + 0x418) = uVar2;
    }
  }
  else {
    iVar9 = FUN_003063a0();
    if (iVar9 != 0) {
      iVar9 = FUN_0033f428(0xa8,0x2e,0x8a,0xb8);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
        }
        else {
          *(undefined4 *)(param_1 + 0x98) = uVar5;
        }
        *(undefined4 *)(param_1 + 0x45c) = 0;
        *(undefined4 *)(param_1 + 0x460) = 0;
        *(undefined4 *)(param_1 + 0x464) = 0;
        *(undefined4 *)(param_1 + 0x1f8) = uVar6;
        *(undefined4 *)(param_1 + 0x1bc) = uVar6;
        *(undefined4 *)(param_1 + 0x180) = uVar6;
        *(undefined4 *)(param_1 + 0x274) = uVar1;
        *(undefined4 *)(param_1 + 0x2b0) = uVar1;
        *(undefined4 *)(param_1 + 0x2ec) = uVar2;
        *(undefined4 *)(param_1 + 0x328) = uVar2;
        *(undefined4 *)(param_1 + 0x364) = uVar1;
        *(undefined4 *)(param_1 + 0x3a0) = uVar1;
        *(undefined4 *)(param_1 + 0x3dc) = uVar2;
        *(undefined4 *)(param_1 + 0x418) = uVar2;
      }
      else {
        if (*(char *)(param_1 + 5) == '\0') {
          cVar8 = '\x01';
        }
        else {
          cVar8 = '\x02';
        }
        *(char *)(param_1 + 8) = cVar8;
        *(undefined1 *)(param_1 + 4) = 4;
        *(undefined1 *)(param_1 + 7) = 0;
        iVar9 = DAT_0044c63c;
        *(undefined4 *)(param_1 + 0x470) = 0x14;
        *(undefined4 *)(param_1 + 0x14) = uVar4;
        *(undefined4 *)(param_1 + 0x144) = uVar6;
        if (cVar8 == '\x02') {
          FUN_0030765c();
        }
        else {
          FUN_00307668(iVar9);
        }
      }
    }
  }
  uVar2 = DAT_0044c644;
  uVar1 = DAT_0044c640;
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar9 = FUN_0033f428(0xe,0x2e,0x8a,0xb8);
    *(bool *)(param_1 + 0xc) = iVar9 != 0;
    uVar4 = DAT_0044c638;
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_0037547c(uVar3,0,4,uVar4);
      FUN_002e7818(param_1);
      *(undefined4 *)(param_1 + 0x274) = uVar1;
      *(undefined4 *)(param_1 + 0x2b0) = uVar1;
      *(undefined4 *)(param_1 + 0x2ec) = uVar2;
      *(undefined4 *)(param_1 + 0x328) = uVar2;
      *(undefined4 *)(param_1 + 0x364) = uVar1;
      *(undefined4 *)(param_1 + 0x3a0) = uVar1;
      *(undefined4 *)(param_1 + 0x3dc) = uVar2;
      *(undefined4 *)(param_1 + 0x418) = uVar2;
    }
  }
  else {
    iVar9 = FUN_003063a0();
    if (iVar9 != 0) {
      iVar9 = FUN_0033f428(0xe,0x2e,0x8a,0xb8);
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 0xc) = 0;
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined4 *)(param_1 + 0x5c) = uVar5;
        }
        else {
          *(undefined4 *)(param_1 + 0x98) = uVar5;
        }
        *(undefined4 *)(param_1 + 0x45c) = 0;
        *(undefined4 *)(param_1 + 0x460) = 0;
        *(undefined4 *)(param_1 + 0x464) = 0;
        *(undefined4 *)(param_1 + 0x1f8) = uVar6;
        *(undefined4 *)(param_1 + 0x1bc) = uVar6;
        *(undefined4 *)(param_1 + 0x180) = uVar6;
        *(undefined4 *)(param_1 + 0x274) = uVar1;
        *(undefined4 *)(param_1 + 0x2b0) = uVar1;
        *(undefined4 *)(param_1 + 0x2ec) = uVar2;
        *(undefined4 *)(param_1 + 0x328) = uVar2;
        *(undefined4 *)(param_1 + 0x364) = uVar1;
        *(undefined4 *)(param_1 + 0x3a0) = uVar1;
        *(undefined4 *)(param_1 + 0x3dc) = uVar2;
        *(undefined4 *)(param_1 + 0x418) = uVar2;
        return;
      }
      if (*(char *)(param_1 + 5) == '\0') {
        cVar8 = '\x01';
      }
      else {
        cVar8 = '\x02';
      }
      *(char *)(param_1 + 8) = cVar8;
      *(undefined1 *)(param_1 + 4) = 4;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 0x470) = 0x14;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 0x144) = uVar6;
      if (cVar8 == '\x02') {
        *(undefined1 *)(DAT_0044c63c + 0x1f) = 0xef;
        return;
      }
      *(undefined1 *)(DAT_0044c63c + 0x1f) = 0;
      return;
    }
  }
  return;
}
