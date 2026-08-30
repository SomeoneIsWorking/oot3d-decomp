// OoT3D decomp @ 001d08ac  name=FUN_001d08ac  size=680

void FUN_001d08ac(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;

  FUN_003510b0(param_1,uRam001d0b54);
  FUN_0037572c(uRam001d0b58,param_1);
  fVar1 = fRam001d0b60;
  *(undefined4 *)(param_1 + 0x2c) = uRam001d0b5c;
  FUN_00372d4c(fVar1 / *(float *)(param_1 + 0x58),uRam001d0b64,param_1 + 0xbc,0);
  *(undefined1 *)(param_1 + 0x33a) = 0xff;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(iRam001d0b68 + iVar3) != 0)
     ) {
    iVar3 = iVar3 + 0x3a5c;
  }
  else {
    iVar3 = 0;
  }
  iVar3 = iVar3 + 0x10;
  *(int *)(param_1 + 0x228) = iVar3;
  uVar4 = func_0x00358ef8(iVar3,2);
  FUN_00353e78(iVar3,param_2,param_1 + 0x1a4,uVar4,*(undefined4 *)(param_1 + 0x178),0xe,0,0,0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1cc) + 0xc);
  uVar4 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x228),5);
  func_0x00372d94(iVar3,uVar4);
  *(undefined1 *)(iVar3 + 0x10) = 1;
  puVar2 = puRam001d0b6c;
  iVar3 = (**(code **)(*(int *)*puRam001d0b6c + 8))((int *)*puRam001d0b6c,0x98);
  puVar5 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)func_0x00352e80();
  }
  *(undefined4 **)(param_1 + 0x2a4) = puVar5;
  *puVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x10);
  uVar4 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x228),0xb);
  func_0x00372d94(*(undefined4 *)(param_1 + 0x2a4),uVar4);
  iVar3 = (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2,0x98);
  puVar5 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)func_0x00352e80();
  }
  *(undefined4 **)(param_1 + 0x2a8) = puVar5;
  *puVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x10);
  uVar4 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x228),10);
  func_0x00372d94(*(undefined4 *)(param_1 + 0x2a8),uVar4);
  uVar4 = func_0x00358ef8(*(undefined4 *)(param_1 + 0x228),6);
  if (((*puRam001d0b70 & 1) == 0) && (iVar3 = func_0x003679b4(puRam001d0b70), iVar3 != 0)) {
    func_0x0036788c(iRam001d0b74);
  }
  iVar3 = 0;
  piVar8 = *(int **)(iRam001d0b74 + 0x17c);
  piVar8[2] = *(int *)(param_1 + 0x178);
  do {
    iVar6 = (**(code **)(*piVar8 + 8))(piVar8,uVar4,0);
    *(int *)(param_1 + iVar3 * 4 + 0x22c) = iVar6;
    iVar6 = *(int *)(iVar6 + 0xc);
    uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x228),3);
    func_0x00372d94(iVar6,uVar7);
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar6 + 0x10) = 1;
  } while (iVar3 < 0x1e);
  piVar8[2] = 0;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0033e37c(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_1 + 0x2b0) = uRam001d0b80;
  }
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x88c,param_1,uRam001d0b84,param_1 + 0x8ac);
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}
