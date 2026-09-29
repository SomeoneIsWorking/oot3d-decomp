// OoT3D decomp @ 0045cad8  name=FUN_0045cad8  size=576

void FUN_0045cad8(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;

  if ((*DAT_0045cd18 & 1) == 0) {
    uVar11 = FUN_003679b4(DAT_0045cd18);
    param_2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 != 0) {
      FUN_0036788c(DAT_0045cd1c);
      param_2 = DAT_0045cd24;
    }
  }
  iVar7 = DAT_0045cd28;
  FUN_003016e0(1,param_2);
  puVar6 = DAT_0045cd2c;
  puVar8 = DAT_0045cd2c + 0x540;
  if (*(char *)(param_1 + 0x104) == '\0') {
    if (*(char *)(iVar7 + 0xc) == '\0') {
      return;
    }
    if (*(int *)(iVar7 + 0x3ec) < 0) {
      FUN_002dece8(iVar7);
    }
    else {
      cVar1 = *(char *)((int)DAT_0045cd2c + 0xe);
      cVar2 = *(char *)((int)DAT_0045cd2c + 0xf);
      cVar3 = *(char *)((int)DAT_0045cd2c + 0x2d);
      cVar4 = *(char *)(DAT_0045cd2c + 0x4f6);
      uVar5 = *(undefined2 *)(DAT_0045cd2c + 0x13);
      uVar10 = DAT_0045cd2c[0x56d];
      FUN_00371738(DAT_0045cd34,DAT_0045cd2c,DAT_0045cd30);
      FUN_00343280(DAT_0045cd38,0x70);
      *(undefined2 *)((int)puVar6 + 0x155e) = 0;
      *(undefined2 *)((int)puVar6 + 0x1562) = 0;
      FUN_00478a78();
      FUN_002eb05c();
      *(bool *)((int)puVar6 + 0xe) = cVar1 != '\0';
      *(bool *)((int)puVar6 + 0xf) = cVar2 != '\0';
      *(bool *)((int)puVar6 + 0x2d) = cVar3 != '\0';
      *(bool *)(puVar6 + 0x4f6) = cVar4 != '\0';
      *(undefined2 *)(puVar6 + 0x13) = uVar5;
      puVar6[0x56d] = uVar10;
      *(undefined2 *)(puVar6 + 0x560) = 0;
    }
  }
  iVar9 = *(int *)(iVar7 + 0x3ec);
  FUN_003655d0(0,0x14);
  FUN_0033d13c(0);
  iVar7 = *(int *)(iVar7 + 1000);
  if (iVar7 != 8) {
    *(undefined1 *)(puVar6 + 0x55d) = 0;
    *(undefined1 *)((int)puVar6 + 0x1573) = 0;
    *(undefined1 *)((int)puVar6 + 0x1572) = 0;
    *(undefined1 *)((int)puVar6 + 0x1571) = 0;
    *(undefined1 *)(puVar6 + 0x55c) = 0;
    *(undefined1 *)((int)puVar6 + 0x156f) = 0;
    *(undefined1 *)((int)puVar6 + 0x1575) = 0;
    *(undefined2 *)(puVar6 + 0x55f) = 0;
    *(undefined2 *)((int)puVar6 + 0x157a) = 0;
    *(undefined2 *)(puVar6 + 0x55e) = 0;
    *(undefined1 *)((int)puVar6 + 0x1576) = 0;
  }
  puVar6[0x556] = 0xff;
  *(undefined1 *)((int)puVar6 + 0x156e) = 0xff;
  *(undefined2 *)(puVar6 + 0x568) = 0x8000;
  *(undefined2 *)(puVar6 + 0x569) = 0xffff;
  puVar6[0x53b] = 0;
  *(undefined2 *)puVar8 = 0xffff;
  puVar6[0x539] = 0;
  *(undefined1 *)((int)puVar6 + 0x1551) = 1;
  if (iVar9 < 0) {
    iVar7 = 2;
  }
  *DAT_0045cd3c = 0;
  if (iVar9 < 0) {
    puVar6[0x53b] = iVar7;
    uVar10 = 0xbb;
  }
  else if (iVar7 == 8) {
    uVar10 = (**(code **)(DAT_0045cd40 + iVar9 * 4))(param_1);
  }
  else {
    uVar10 = (**(code **)(DAT_0045cd44 + iVar9 * 4))(param_1);
  }
  *puVar6 = uVar10;
  uVar10 = DAT_0045cd48;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = DAT_0045cd4c;
  FUN_00331754(0);
  return;
}
