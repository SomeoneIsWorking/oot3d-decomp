// OoT3D decomp @ 003123c8  name=FUN_003123c8  size=2692

undefined4 FUN_003123c8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  code *extraout_r12;
  code *pcVar11;
  code *extraout_r12_00;
  code *extraout_r12_01;
  code *extraout_r12_02;
  code *extraout_r12_03;
  code *extraout_r12_04;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  puVar9 = DAT_00312da8;
  local_28 = 1;
  if ((param_1 == 0 || param_2 == 0) || (*(char *)(DAT_00312da8 + 4) != '\0')) {
    return 0;
  }
  FUN_00343280(DAT_00312da8,0x180);
  *puVar9 = 0xf0;
  puVar9[2] = 400;
  piVar1 = DAT_00312dac;
  puVar9[1] = 0xf0;
  puVar9[3] = 0x140;
  piVar1[1] = param_2;
  *piVar1 = param_1;
  piVar1[3] = 1;
  piVar1[2] = 1;
  puVar9[0x59] = 0x700;
  FUN_00302ba0();
  FUN_003120d4(local_28);
  uVar4 = DAT_00312db0;
  puVar7 = (undefined4 *)puVar9[0x27];
  if (puVar7 != (undefined4 *)0x0) {
    pcVar11 = extraout_r12;
    if (puVar7[1] != 0) {
      pcVar11 = (code *)piVar1[1];
    }
    if (puVar7[1] != 0 && pcVar11 != (code *)0x0) {
      (*pcVar11)(0x10000,DAT_00312db0,*puVar7);
      pcVar11 = extraout_r12_00;
    }
    if (puVar7[6] != 0) {
      pcVar11 = (code *)piVar1[1];
    }
    if (puVar7[6] != 0 && pcVar11 != (code *)0x0) {
      (*pcVar11)(0x10000,0x100,0);
    }
    puVar7[2] = 0;
    puVar7[7] = 0;
    puVar7[3] = 0;
    puVar7[8] = 0;
    puVar7[4] = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    if ((code *)*piVar1 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(code *)*piVar1)(0x10000,uVar4,*puVar7);
    }
    puVar7[1] = uVar4;
    puVar7[2] = 0x10000;
    if ((code *)*piVar1 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(code *)*piVar1)(0x10000,0x100,0,0x1c0);
    }
    puVar7[6] = uVar4;
    FUN_00343280(uVar4,0x1c0);
    piVar2 = DAT_00312db4;
    puVar7[7] = 0x10;
    piVar3 = DAT_00312db8;
    iVar5 = puVar7[1];
    *piVar2 = iVar5;
    *piVar3 = iVar5 + puVar7[2];
  }
  if (puVar9[0x27] != 0) {
    *(undefined4 *)(puVar9[0x27] + 0x2c) = 0x300;
  }
  iVar5 = FUN_00302ba0();
  if ((((iVar5 != 0) || (iVar5 = FUN_00411c18(), iVar5 < 0)) || (iVar5 = FUN_00410b90(), iVar5 < 0))
     || (((iVar5 = FUN_00414b34(), iVar5 < 0 || (iVar5 = FUN_00410c68(), iVar5 < 0)) ||
         ((iVar5 = FUN_00414874(), iVar5 < 0 || (iVar5 = FUN_00414bec(), iVar5 < 0)))))) {
LAB_00312fac:
    FUN_00302678(1,&local_28);
    return 0;
  }
  FUN_00401730();
  iVar5 = FUN_00401f08();
  uVar4 = FUN_00402004();
  DAT_00312da8[5] = uVar4;
  FUN_00401f1c(DAT_00312dbc,0);
  FUN_00401f1c(DAT_00312dc0,1);
  FUN_00401f1c(DAT_00312dc4,2);
  FUN_00401f1c(DAT_00312dc8,3);
  FUN_00401f1c(DAT_00312dcc,4);
  FUN_00401f1c(DAT_00312dd0,5);
  FUN_00401f1c(DAT_00312dd4,6);
  if (iVar5 != 0) {
    local_2c = 0;
    FUN_004017d8(DAT_00312dd8,&local_2c,4);
    local_2c = DAT_00312ddc;
    FUN_004017d8(DAT_00312de0,&local_2c,4);
    local_2c = 0xfffffff0;
    FUN_004017d8(DAT_00312de4,&local_2c,4);
    local_2c = 1;
    FUN_004017d8(DAT_00312de8,&local_2c,4);
    local_2c = DAT_00312dec;
    FUN_004017d8(DAT_00312df0,&local_2c,4);
    local_2c = 0xd1;
    FUN_004017d8(DAT_00312df4,&local_2c,4);
    local_2c = 0x1c1;
    FUN_004017d8(DAT_00312df8,&local_2c,4);
    local_2c = 0x1c1;
    FUN_004017d8(DAT_00312dfc,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312e00,&local_2c,4);
    local_2c = 0xcf;
    FUN_004017d8(DAT_00312e04,&local_2c,4);
    local_2c = 0xd1;
    FUN_004017d8(DAT_00312e08,&local_2c,4);
    local_2c = DAT_00312e0c;
    FUN_004017d8(DAT_00312e10,&local_2c,4);
    local_2c = 0x10000;
    FUN_004017d8(DAT_00312e14,&local_2c,4);
    local_2c = 0x19d;
    FUN_004017d8(DAT_00312e18,&local_2c,4);
    local_2c = 2;
    FUN_004017d8(DAT_00312e1c,&local_2c,4);
    local_2c = 0x192;
    FUN_004017d8(DAT_00312e20,&local_2c,4);
    local_2c = 0x192;
    FUN_004017d8(DAT_00312e24,&local_2c,4);
    local_2c = 0x192;
    FUN_004017d8(DAT_00312e28,&local_2c,4);
    local_2c = 1;
    FUN_004017d8(DAT_00312e2c,&local_2c,4);
    local_2c = 2;
    FUN_004017d8(DAT_00312e30,&local_2c,4);
    local_2c = DAT_00312e34;
    FUN_004017d8(DAT_00312e38,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312e3c,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312e40,&local_2c,4);
    local_2c = DAT_00312e44;
    FUN_004017d8(DAT_00312e48,&local_2c,4);
    local_2c = 0x1c100d1;
    FUN_004017d8(DAT_00312e4c,&local_2c,4);
    local_2c = DAT_00312e50;
    FUN_004017d8(DAT_00312e54,&local_2c,4);
    local_2c = DAT_00312e58;
    FUN_004017d8(DAT_00312e5c,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312e60,&local_2c,4);
    local_2c = 0x1c2;
    FUN_004017d8(DAT_00312e64,&local_2c,4);
    local_2c = 0xd1;
    FUN_004017d8(DAT_00312e68,&local_2c,4);
    local_2c = 0x1c1;
    FUN_004017d8(DAT_00312e6c,&local_2c,4);
    local_2c = 0x1c1;
    FUN_004017d8(DAT_00312e70,&local_2c,4);
    local_2c = 0xcd;
    FUN_004017d8(DAT_00312e74,&local_2c,4);
    local_2c = 0xcf;
    FUN_004017d8(DAT_00312e78,&local_2c,4);
    local_2c = 0xd1;
    FUN_004017d8(DAT_00312e7c,&local_2c,4);
    local_2c = DAT_00312e0c;
    FUN_004017d8(DAT_00312e80,&local_2c,4);
    local_2c = 0x10000;
    FUN_004017d8(DAT_00312e84,&local_2c,4);
    local_2c = 0x19d;
    FUN_004017d8(DAT_00312e88,&local_2c,4);
    puVar9 = (undefined4 *)0x52;
    local_2c = 0x52;
    FUN_004017d8(DAT_00312e8c,&local_2c,4);
    local_2c = 0x192;
    FUN_004017d8(DAT_00312e90,&local_2c,4);
    local_2c = 0x192;
    FUN_004017d8(DAT_00312e94,&local_2c,4);
    local_2c = 0x4f;
    FUN_004017d8(DAT_00312e98,&local_2c,4);
    local_2c = 0x50;
    FUN_004017d8(DAT_00312e9c,&local_2c,4);
    local_2c = 0x52;
    FUN_004017d8(DAT_00312ea0,&local_2c,4);
    local_2c = DAT_00312ea4;
    FUN_004017d8(DAT_00312ea8,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312eac,&local_2c,4);
    local_2c = 0x11;
    FUN_004017d8(DAT_00312eb0,&local_2c,4);
    local_2c = DAT_00312eb4;
    FUN_004017d8(DAT_00312eb8,&local_2c,4);
    local_2c = 0x1c100d1;
    FUN_004017d8(DAT_00312ebc,&local_2c,4);
    local_2c = 0x1920052;
    FUN_004017d8(DAT_00312ec0,&local_2c,4);
    local_2c = DAT_00312ec4;
    FUN_004017d8(DAT_00312ec8,&local_2c,4);
    local_2c = 0;
    FUN_004017d8(DAT_00312ecc,&local_2c,4);
    uVar4 = DAT_00312ed0;
    local_2c = DAT_00312ed0;
    FUN_004017d8(DAT_00312ed4,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312ed8,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312edc,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312ee0,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312ee4,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312ee8,&local_2c,4);
    local_2c = 1;
    FUN_004017d8(DAT_00312eec,&local_2c,4);
    local_2c = 1;
    FUN_004017d8(DAT_00312ef0,&local_2c,4);
    local_30 = 0xff00;
    local_2c = 0;
    FUN_00401ed4(DAT_00312ef4,&local_2c,&local_30,4);
    local_2c = DAT_00312ef8;
    FUN_004017d8(0x400004,&local_2c);
    local_2c = 0;
    local_30 = 0xff;
    FUN_00401ed4(DAT_00312efc,&local_2c,&local_30,4);
    local_2c = 0;
    local_30 = 0xff;
    FUN_00401ed4(DAT_00312f00,&local_2c,&local_30,4);
    local_2c = DAT_00312f04;
    FUN_004017d8(DAT_00312f08,&local_2c,4);
    local_2c = 0xff2;
    local_30 = 0xffff;
    FUN_00401ed4(DAT_00312f0c,&local_2c,&local_30,4);
    uVar4 = DAT_00312f10;
    local_2c = DAT_00312f10;
    FUN_004017d8(DAT_00312f14,&local_2c,4);
    local_2c = uVar4;
    FUN_004017d8(DAT_00312f18,&local_2c,4);
  }
  FUN_00302a1c();
  puVar7 = DAT_00312da8;
  iVar10 = DAT_00312da8[0x27];
  pcVar11 = extraout_r12_01;
  if (iVar5 != 0) {
    puVar8 = (undefined1 *)(*(int *)(iVar10 + 0x18) + *(int *)(iVar10 + 0x20) * 0x1c);
    *puVar8 = 3;
    *(uint *)(puVar8 + 0x14) = *(uint *)(puVar8 + 0x14) & 0xfffffff8 | 4;
    iVar6 = FUN_00415844(0x30000);
    *(int *)(puVar8 + 4) = iVar6 + -0x7fff;
    if ((code *)*piVar1 == (code *)0x0) {
      puVar9 = (undefined4 *)0x0;
      pcVar11 = (code *)0x0;
    }
    else {
      puVar9 = (undefined4 *)(*(code *)*piVar1)(0x10000,0x100,0,DAT_00312f1c);
      pcVar11 = extraout_r12_02;
    }
    if (puVar9 == (undefined4 *)0x0) goto LAB_00312fac;
    *(undefined4 **)(puVar8 + 8) = puVar9;
    if (((uint)puVar9 & 0xf) != 0) {
      *(uint *)(puVar8 + 8) = (int)puVar9 + (0x10 - ((uint)puVar9 & 0xf));
    }
    *(undefined2 *)(puVar8 + 0xc) = 0x80;
    *(undefined2 *)(puVar8 + 0xe) = 0x80;
    *(undefined2 *)(puVar8 + 0x10) = 0x80;
    *(undefined2 *)(puVar8 + 0x12) = 0x80;
    *(uint *)(puVar8 + 0x14) = *(uint *)(puVar8 + 0x14) & 0xfffff007 | 0x20;
    *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + 1;
  }
  iVar10 = puVar7[0x27];
  if (iVar10 != 0) {
    if (*(char *)((int)puVar7 + 0x11) != '\0') goto code_r0x00312d98;
    puVar7[0x28] = iVar10;
    *(undefined1 *)((int)puVar7 + 0x12) = 1;
    if (*(int *)(iVar10 + 0x20) <= *(int *)(iVar10 + 0x28)) goto LAB_00312f20;
    *(undefined1 *)((int)puVar7 + 0x11) = 1;
    if (*(int *)(iVar10 + 0x2c) != 0x300) goto code_r0x00312d98;
    FUN_0030e038();
    FUN_003027dc();
    FUN_0030dfd8();
    pcVar11 = extraout_r12_03;
  }
  while (*(char *)((int)puVar7 + 0x11) != '\0') {
code_r0x00312d98:
    FUN_00489c9c();
    pcVar11 = extraout_r12_04;
  }
LAB_00312f20:
  if (iVar5 != 0) {
    pcVar11 = (code *)piVar1[1];
  }
  if (iVar5 != 0 && pcVar11 != (code *)0x0) {
    (*pcVar11)(0x10000,0x100,0,puVar9);
  }
  iVar5 = puVar7[0x28];
  if (iVar5 != 0) {
    FUN_0030e038();
    if (*(char *)((int)puVar7 + 0x11) == '\0') {
      *(undefined1 *)((int)puVar7 + 0x12) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x24) * 0x1c + -0x1a) = 1;
      *(undefined1 *)(puVar7 + 6) = 1;
    }
    FUN_0030dfd8();
  }
  FUN_003120d4(0);
  FUN_00302678(1,&local_28);
  *(undefined1 *)(puVar7 + 4) = 1;
  return 1;
}
