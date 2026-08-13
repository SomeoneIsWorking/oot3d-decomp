// OoT3D decomp @ 001a62c4  name=FUN_001a62c4  size=2288

void FUN_001a62c4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;

  func_0x00375c10(param_2,0x14);
  uVar1 = uRam001a6698;
  iVar5 = param_2 + 0x208c;
  func_0x0036aa20(uRam001a66a0,uRam001a669c,uRam001a6698,iVar5,param_1,param_2,0xac,0,0,0,100);
  func_0x003510b0(param_1,uRam001a66a4);
  func_0x00372d4c(uVar1,uVar1,param_1 + 0xbc,0);
  func_0x0037572c(uRam001a66a8,param_1);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(iRam001a66ac + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x438) = iVar6 + 0x10;
  uVar7 = func_0x00358ef8(iVar6 + 0x10,1);
  func_0x00358ea8(*(undefined4 *)(param_1 + 0x438),param_2,param_1 + 0x1a4,uVar7,
                  *(undefined4 *)(param_1 + 0x178),0xffffffff,0,0,0);
  puVar8 = puRam001a66b8;
  uVar7 = uRam001a66b4;
  puVar2 = puRam001a66b0;
  uVar11 = 0;
  do {
    if (((*puVar2 & 1) == 0) && (iVar6 = func_0x003679b4(puRam001a66b0), iVar6 != 0)) {
      *puVar8 = uVar7;
      puVar8[1] = uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar1;
      puVar8[4] = uVar1;
      puVar8[5] = uVar7;
      puVar8[6] = uVar1;
      puVar8[7] = uVar1;
      puVar8[8] = uVar1;
      puVar8[9] = uVar1;
      puVar8[10] = uVar7;
      puVar8[0xb] = uVar1;
    }
    func_0x00372224(param_1 + uVar11 * 0x30 + 0x43c,puRam001a66b8);
    uVar11 = (uint)(short)((short)uVar11 + 1);
  } while (uVar11 < 0x12);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1cc) + 0xc);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),4);
  func_0x00372d94(iVar6,uVar7);
  *(undefined1 *)(iVar6 + 0x10) = 1;
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),3);
  func_0x00358ea8(*(undefined4 *)(param_1 + 0x438),param_2,param_1 + 0x228,uVar7,
                  *(undefined4 *)(param_1 + 0x178),1,0,0,0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x250) + 0xc);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),6);
  func_0x00372d94(iVar6,uVar7);
  *(undefined1 *)(iVar6 + 0x10) = 1;
  puVar3 = puRam001a66bc;
  iVar6 = (**(code **)(*(int *)*puRam001a66bc + 8))((int *)*puRam001a66bc,0x98);
  puVar8 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar8 = (undefined4 *)func_0x00352e80();
  }
  *(undefined4 **)(param_1 + 0x870) = puVar8;
  *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x250) + 0x10);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),0xc);
  func_0x00372d94(*(undefined4 *)(param_1 + 0x870),uVar7);
  iVar6 = (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3,0x98);
  puVar8 = (undefined4 *)0x0;
  if (iVar6 != 0) {
    puVar8 = (undefined4 *)func_0x00352e80();
  }
  *(undefined4 **)(param_1 + 0x874) = puVar8;
  *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x250) + 0x10);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),9);
  func_0x00372d94(*(undefined4 *)(param_1 + 0x874),uVar7);
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),9);
  func_0x00358ea8(*(undefined4 *)(param_1 + 0x438),param_2,param_1 + 0x3b4,uVar7,
                  *(undefined4 *)(param_1 + 0x178),1,0,0,0);
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),5);
  func_0x00358ea8(*(undefined4 *)(param_1 + 0x438),param_2,param_1 + 0x2ac,uVar7,
                  *(undefined4 *)(param_1 + 0x178),3,0,0,0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x2d4) + 0xc);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),8);
  func_0x00372d94(iVar6,uVar7);
  *(undefined1 *)(iVar6 + 0x10) = 1;
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),4);
  func_0x00358ea8(*(undefined4 *)(param_1 + 0x438),param_2,param_1 + 0x330,uVar7,
                  *(undefined4 *)(param_1 + 0x178),2,0,0,0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x358) + 0xc);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),7);
  func_0x00372d94(iVar6,uVar7);
  puVar2 = puRam001a6ad0;
  *(undefined1 *)(iVar6 + 0x10) = 1;
  if (((*puVar2 & 1) == 0) && (iVar6 = func_0x003679b4(puVar2), iVar6 != 0)) {
    func_0x0036788c(iRam001a6ad4);
  }
  puVar8 = puRam001a6b18;
  piVar12 = *(int **)(iRam001a6ad4 + 0x17c);
  iVar6 = (**(code **)(*(int *)*puRam001a6b18 + 0xc))
                    ((int *)*puRam001a6b18,0x234,0x1a6ae0,uRam001a6b1c);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = func_0x00347258();
  }
  *(undefined4 *)(param_1 + 0x79c) = uVar7;
  if (((*puVar2 & 1) == 0) && (iVar6 = func_0x003679b4(puRam001a6ad0), iVar6 != 0)) {
    func_0x0036788c(iRam001a6ad4);
  }
  **(undefined4 **)(param_1 + 0x79c) = *(undefined4 *)(iRam001a6ad4 + 0x174);
  *(undefined1 *)(*(int *)(param_1 + 0x79c) + 0x1ba) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x79c) + 0xb) = 1;
  piVar12[2] = *(int *)(param_1 + 0x79c);
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),8);
  uVar11 = 0;
  do {
    uVar9 = (**(code **)(*piVar12 + 8))(piVar12,uVar7,1);
    iVar6 = uVar11 * 4;
    uVar11 = uVar11 + 1;
    *(undefined4 *)(param_1 + iVar6 + 0x7a4) = uVar9;
  } while (uVar11 < 0x12);
  piVar12[2] = 0;
  iVar6 = (**(code **)(*(int *)*puVar8 + 0xc))((int *)*puVar8,0x234,0x1a6ae0,uRam001a6b20);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = func_0x00347258();
  }
  *(undefined4 *)(param_1 + 0x7a0) = uVar7;
  if (((*puVar2 & 1) == 0) && (iVar6 = func_0x003679b4(puRam001a6ad0), iVar6 != 0)) {
    func_0x0036788c(iRam001a6ad4);
  }
  **(undefined4 **)(param_1 + 0x7a0) = *(undefined4 *)(iRam001a6ad4 + 0x174);
  piVar12[2] = *(int *)(param_1 + 0x7a0);
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),6);
  iVar6 = 0;
  do {
    iVar10 = (**(code **)(*piVar12 + 8))(piVar12,uVar7,1);
    *(int *)(param_1 + iVar6 * 4 + 0x7ec) = iVar10;
    iVar10 = *(int *)(iVar10 + 0xc);
    uVar9 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),3);
    func_0x00372d94(iVar10,uVar9);
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar10 + 0x10) = 1;
  } while (iVar6 < 0x1e);
  piVar12[2] = 0;
  uVar7 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x438),10);
  iVar6 = 0;
  do {
    uVar9 = (**(code **)(*piVar12 + 8))(piVar12,uVar7,0);
    iVar10 = iVar6 + 1;
    *(undefined4 *)(param_1 + iVar6 * 0x4c + 0x2924) = uVar9;
    iVar6 = iVar10;
  } while (iVar10 < 0x6e);
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),0);
  *(undefined4 *)(param_1 + 0x864) = uVar7;
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),1);
  *(undefined4 *)(param_1 + 0x868) = uVar7;
  uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x438),2);
  *(undefined4 *)(param_1 + 0x86c) = uVar7;
  if (((*puVar2 & 1) == 0) && (iVar6 = func_0x003679b4(puRam001a6ad0), iVar6 != 0)) {
    func_0x0036788c(iRam001a6ad4);
  }
  uVar7 = func_0x00372c90(*(undefined4 *)(param_1 + 0x438),*(undefined4 *)(iRam001a6b24 + 0xf3c));
  *(undefined4 *)(param_1 + 0x878) = uVar7;
  *(undefined2 *)(param_1 + 0x229e) = 1;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uRam001a6b28;
  func_0x00350eb8(param_2);
  func_0x00350d48(param_2,param_1 + 0x2314,param_1,uRam001a6b2c,param_1 + 0x2334);
  iVar6 = 0;
  do {
    iVar10 = param_1 + iVar6 * 0xc;
    *(undefined4 *)(iVar10 + 0x104c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar10 + 0x1050) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar10 + 0x1054) = *(undefined4 *)(param_1 + 0x30);
    if (iVar6 < 0x2d) {
      *(undefined4 *)(iVar10 + 0x19d0) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar10 + 0x19d4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(iVar10 + 0x19d8) = *(undefined4 *)(param_1 + 0x30);
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 0x96);
  *(undefined1 *)(param_1 + 0xb7) = 0x18;
  *(undefined2 *)(param_1 + 0x886) = 0x12;
  if (*(short *)(param_1 + 0x229e) == 0) {
    *(undefined4 *)(param_1 + 0x880) = uRam001a6b30;
  }
  else {
    FUN_00373d40(param_1 + 0x1a4,0);
    FUN_00373d40(param_1 + 0x228,1);
    FUN_00373d40(param_1 + 0x2ac,3);
    FUN_00373d40(param_1 + 0x330,2);
    uVar7 = uRam001a6b38;
    *(undefined4 *)(param_1 + 0x880) = uRam001a6b34;
    *(undefined4 *)(param_1 + 0x914) = uVar7;
  }
  iVar6 = func_0x0035b164();
  if ((iVar6 == 1) ||
     (iVar6 = func_0x0036cf6c(param_2,(int)*(char *)(iRam001a6c48 + param_2)), iVar6 == 0)) {
    func_0x0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                    *(undefined4 *)(param_1 + 0x30),iVar5,param_1,param_2,0xa2,0,0,0,
                    (int)*(short *)(param_1 + 0x229e));
  }
  else {
    func_0x00374428(param_1);
    uVar7 = uRam001a6c4c;
    func_0x0036aa20(uVar1,uRam001a6c4c,uVar1,iVar5,param_1,param_2,0x5d,0,0,0,0xffffffff);
    func_0x003738d0(uVar1,uVar7,uRam001a6c50,iVar5,param_2,0x5f,0,0,0,0,1);
  }
  puVar4 = puRam001a6c54;
  *(undefined2 *)(puRam001a6c54 + 2) = 0;
  *puVar4 = 0;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}
