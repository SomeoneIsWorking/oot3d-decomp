// OoT3D decomp @ 0036f848  name=FUN_0036f848  size=264

void FUN_0036f848(int param_1,undefined param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  float fVar7;
  
  uVar1 = 0;
  if (*(char *)(DAT_0036f950 + 8) != '\0') {
    iVar3 = 0x10000;
    if (*(short *)(DAT_0036f950 + 0x1c) < 0x10000) {
      iVar3 = (int)*(short *)(DAT_0036f950 + 0x1c);
    }
    bVar6 = *(char *)(DAT_0036f950 + 0x2c) == '\0';
    uVar1 = (ushort)bVar6;
    if (!bVar6) {
      iVar4 = (int)*(short *)(DAT_0036f950 + 0x40);
      iVar2 = iVar3;
      if (iVar4 < iVar3) {
        iVar2 = iVar4;
      }
      if (iVar4 < iVar3) {
        uVar1 = 1;
      }
      if (*(char *)(DAT_0036f950 + 0x50) == '\0') {
        uVar1 = 2;
      }
      else {
        iVar4 = (int)*(short *)(DAT_0036f950 + 100);
        iVar3 = iVar2;
        if (iVar4 < iVar2) {
          iVar3 = iVar4;
        }
        if (iVar4 < iVar2) {
          uVar1 = 2;
        }
        if ((*(char *)(DAT_0036f950 + 0x74) == '\0') || (*(short *)(DAT_0036f950 + 0x88) < iVar3)) {
          uVar1 = 3;
        }
      }
    }
  }
  puVar5 = (undefined4 *)(DAT_0036f950 + (short)uVar1 * 0x24);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[1] = param_1;
  *(undefined2 *)((int)puVar5 + 0x1e) = *(undefined2 *)(param_1 + 0x1ac);
  *(undefined *)(puVar5 + 2) = param_2;
  *(undefined2 *)((int)puVar5 + 0x1a) = 1;
  fVar7 = (float)FUN_003759d0();
  iVar3 = DAT_0036f958;
  *(ushort *)puVar5 = ((ushort)(int)(fVar7 * DAT_0036f954) & 0xfffc) + uVar1;
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}

