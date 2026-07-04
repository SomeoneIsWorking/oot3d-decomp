// OoT3D decomp @ 004574f8  name=FUN_004574f8  size=632

void FUN_004574f8(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  puVar1 = puRam00457778;
  *(undefined4 *)(param_1 + 4) = uRam00457770;
  uVar5 = uRam00457774;
  *(undefined4 *)(param_1 + 8) = uRam00457774;
  if (((*puVar1 & 1) == 0) &&
     (uVar9 = FUN_003679b4(puVar1), uVar5 = (int)((ulonglong)uVar9 >> 0x20), (int)uVar9 != 0)) {
    FUN_0036788c(uRam0045777c);
    uVar5 = uRam00457784;
  }
  uVar7 = uRam00457788;
  iVar2 = FUN_003448d0(uRam00457788,uVar5);
  if (iVar2 == 0) {
    FUN_00487a10(uVar7,1);
  }
  *(undefined2 *)(*piRam0045778c + 0x110) = 2;
  FUN_003016e0(1);
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(puRam00457778), iVar2 != 0)) {
    FUN_0036788c(uRam0045777c);
  }
  uVar5 = uRam00457794;
  iVar2 = iRam00457790;
  *(undefined4 *)(iRam00457790 + 0x444) = uRam00457798;
  *(undefined4 *)(iVar2 + 0x440) = uVar5;
  *(undefined4 *)(param_1 + 0x104) = 3;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 3;
  *(undefined4 *)(param_1 + 0x110) = 0x14;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  uVar5 = uRam0045779c;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  puVar3 = (undefined1 *)(param_1 + 0x13b);
  puVar6 = (undefined1 *)(param_1 + 0x15b);
  iVar8 = 0x10;
  do {
    puVar3[1] = 0xff;
    puVar6[1] = 0;
    puVar3 = puVar3 + 2;
    *puVar3 = 0xff;
    iVar8 = iVar8 + -1;
    puVar6 = puVar6 + 2;
    *puVar6 = 0;
  } while (iVar8 != 0);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0;
  func_0x00471f54(param_1);
  uVar7 = extraout_r1;
  if (((*puVar1 & 1) == 0) &&
     (uVar9 = FUN_003679b4(puRam00457778), uVar7 = (int)((ulonglong)uVar9 >> 0x20), (int)uVar9 != 0)
     ) {
    FUN_0036788c(uRam0045777c);
    uVar7 = uRam00457784;
  }
  if (((*puVar1 & 1) == 0) &&
     (uVar9 = FUN_003679b4(puRam00457778,uVar7), uVar7 = (int)((ulonglong)uVar9 >> 0x20),
     (int)uVar9 != 0)) {
    FUN_0036788c(uRam0045777c);
    uVar7 = uRam00457784;
  }
  FUN_002e4fd8(*(undefined4 *)(iVar2 + 0x2d4),uVar7);
  FUN_00477460(param_1);
  FUN_00331754(1);
  *(undefined1 *)(param_1 + 0x180) = 0;
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  do {
    iVar8 = param_1 + iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar8 + 0x520) = uVar5;
    *(undefined4 *)(iVar8 + 0x524) = uVar5;
    *(undefined4 *)(iVar8 + 0x528) = uVar5;
    uVar7 = uRam004577a0;
  } while (iVar2 < 6);
  puVar4 = (undefined4 *)(param_1 + 0x564);
  iVar2 = 5;
  do {
    puVar4[1] = uVar7;
    puVar4 = puVar4 + 2;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar7;
  } while (iVar2 != 0);
  FUN_0036ec40(0,uRam004577a4);
  *(undefined1 *)(param_1 + 0x101) = 2;
  return;
}

