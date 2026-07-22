// OoT3D decomp @ 00346964  name=FUN_00346964  size=296

undefined4 FUN_00346964(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  puVar1 = puRam00346a8c;
  uVar7 = 1;
  if ((*puRam00346a8c & 1) == 0) {
    uVar8 = func_0x003679b4(puRam00346a8c);
    uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      func_0x0036788c(uRam00346a90);
      uVar7 = uRam00346a98;
    }
  }
  iVar4 = iRam00346a9c;
  iVar2 = func_0x00495998(iRam00346a9c + 0x44,uVar7);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar5 = *puRam00346aa0;
    uVar6 = *puRam00346aa4;
    uVar7 = uVar6;
    if ((*puVar1 & 1) == 0) {
      uVar8 = func_0x003679b4(puRam00346a8c);
      uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        func_0x0036788c(uRam00346a90);
        uVar7 = uRam00346a98;
      }
    }
    iVar4 = func_0x002c2700(iVar4,uVar7);
    if ((uVar3 & uVar5) != 0 || iVar4 != 4 && (uVar3 & uVar6) != 0) {
      FUN_0037547c(uRam00346ab0,0,4,uRam00346aac,uRam00346aac,uRam00346aa8);
      return 1;
    }
  }
  return 0;
}

