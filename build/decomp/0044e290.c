// OoT3D decomp @ 0044e290  name=FUN_0044e290  size=32

void FUN_0044e290(int *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  
  FUN_00454a64(param_1 + 0x1ff6);
  puVar1 = DAT_0044e770;
  iVar5 = param_1[0x82b];
  uVar3 = extraout_r1;
  if (((*DAT_0044e770 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_0044e770), uVar3 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0))
  {
    FUN_0036788c(DAT_0044e774);
    uVar3 = DAT_0044e77c;
  }
  FUN_0031025c(DAT_0044e774,uVar3);
  puVar2 = (undefined1 *)((int)param_1 + 0x6007);
  iVar4 = 5;
  do {
    puVar2[1] = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
  } while (iVar4 != 0);
  *DAT_0044e780 = 0;
  *(undefined4 *)(*param_1 + 0x10) = 0;
  *(undefined4 *)(*param_1 + 0x14) = 0;
  *(undefined2 *)(*DAT_0044e784 + 0x18a) = 0;
  FUN_002e0f7c();
  FUN_002f0618();
  FUN_002eb628();
  FUN_002f8af4();
  FUN_00469b50();
  uVar3 = FUN_002e9920(0);
  FUN_002ee468(uVar3);
  FUN_002dee5c();
  FUN_002dee48();
  FUN_00468c44();
  uVar3 = extraout_r1_00;
  if (((*puVar1 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_0044e770), uVar3 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0))
  {
    FUN_0036788c(DAT_0044e774);
    uVar3 = DAT_0044e77c;
  }
  FUN_003076f4(*(undefined4 *)(DAT_0044e788 + 0x2d4),uVar3);
  FUN_002e56dc(param_1,0);
  FUN_002ded74(param_1 + 0x1807);
  uVar3 = extraout_r1_01;
  if (((*puVar1 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_0044e770), uVar3 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0))
  {
    FUN_0036788c(DAT_0044e774);
    uVar3 = DAT_0044e77c;
  }
  FUN_002e71b4(DAT_0044e78c,uVar3);
  FUN_0045c5f0(param_1);
  FUN_003071e0();
  FUN_002fbbb0();
  FUN_002e64fc(0);
  uVar3 = extraout_r1_02;
  if (((*puVar1 & 1) == 0) &&
     (uVar7 = FUN_003679b4(DAT_0044e770), uVar3 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 != 0))
  {
    FUN_0036788c(DAT_0044e774);
    uVar3 = DAT_0044e77c;
  }
  FUN_00306f68(DAT_0044e790,uVar3);
  FUN_002ded60();
  FUN_0033f104(1);
  FUN_002e5a28(0);
  FUN_0045fce8(param_1);
  FUN_004606d8(param_1);
  FUN_0045dd24(param_1,param_1 + 0x171e);
  if (*(char *)((int)param_1 + 0x7f12) == '\x03') {
    (*(code *)param_1[0x1fbc])(param_1 + 0x1f42);
    param_1[0x1fba] = -1;
    *(undefined1 *)((int)param_1 + 0x7f12) = 0;
  }
  FUN_00462354();
  FUN_0045fc60(DAT_0044e794);
  if (*(uint *)(DAT_0044e798 + 4) != (uint)*(byte *)(param_1 + 0x1700)) {
    FUN_0045f1c8();
    FUN_0034913c(param_1,iVar5);
  }
  FUN_004584ac(param_1 + 0x823,param_1);
  FUN_00470844(param_1);
  FUN_0045b8dc(param_1,param_1 + 0x29c);
  FUN_0045c84c(param_1,param_1 + 0xc64);
  FUN_002decfc(param_1,param_1 + 0x987);
  FUN_00457a58(param_1,param_1 + 0x130c,0);
  *(undefined1 *)((int)param_1 + 0x5405) = 0;
  FUN_002e4514(param_1);
  if (param_1[0x14fd] != 0) {
    FUN_0034fc6c();
    param_1[0x14fd] = 0;
  }
  iVar5 = param_1[0x44];
  if (iVar5 != 0) {
    FUN_003254f4(iVar5,param_1,iVar5);
    param_1[0x44] = param_1[0x44] + -0x10;
    FUN_0034fc6c();
    param_1[0x44] = 0;
  }
  FUN_002ff5d4(param_1 + 0x62);
  if (param_1[0x17f0] != 0) {
    FUN_00465134();
    FUN_0034fc6c(param_1[0x17f0]);
    param_1[0x17f0] = 0;
  }
  if (param_1[0x17f1] != 0) {
    FUN_00465170();
    FUN_0034fc6c(param_1[0x17f1]);
    param_1[0x17f1] = 0;
  }
  FUN_004629c4();
  if (param_1[0x17f2] != 0) {
    FUN_00464d8c();
    FUN_0034fc6c(param_1[0x17f2]);
    param_1[0x17f2] = 0;
  }
  if (param_1[0x45] != 0) {
    FUN_002f70c4(param_1 + 0x46);
    FUN_0034fc6c(param_1[0x45]);
    param_1[0x45] = 0;
  }
  *(undefined2 *)(DAT_0044e79c + (int)param_1) = 0;
  piVar6 = param_1 + 0xe96;
  if ((short)param_1[0x10f7] != 0) {
    iVar5 = 0;
    do {
      iVar4 = piVar6[iVar5 * 0x1c + 0x268];
      FUN_002f70c4(piVar6 + iVar5 * 0x1c + 0x262);
      FUN_0034fc6c(iVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x10f7));
    *(undefined2 *)(param_1 + 0x10f7) = 0;
  }
  FUN_0045fda0(param_1,piVar6);
  FUN_0046051c();
  FUN_002e5b18(param_1);
  return;
}

