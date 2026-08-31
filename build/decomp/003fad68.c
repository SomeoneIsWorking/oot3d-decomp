// OoT3D decomp @ 003fad68  name=FUN_003fad68  size=796

void FUN_003fad68(int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uVar14;
  undefined4 uVar15;

  func_0x0031429c(param_1 + 0x24);
  if (*(char *)(*(int *)(param_1 + 0x10) + 0xb) == '\0') {
    func_0x003141cc(param_1 + 0x24,param_2 + 0x70);
  }
  else if (*(char *)(*param_2 + 0x138) == '\0') {
    uStack_20 = *puRam003faf34;
    uStack_1c = puRam003faf34[1];
    uStack_18 = puRam003faf34[2];
    func_0x003141cc(param_1 + 0x24,&uStack_20);
  }
  else {
    *(undefined1 *)(param_2 + 0x70) = 1;
    func_0x003141cc(param_1 + 0x24,param_2 + 0x70);
  }
  psVar4 = psRam003faf38;
  sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 0x230);
  sVar3 = *psRam003faf38;
  if (sVar2 != 0) {
    *psRam003faf38 = sVar2;
  }
  cVar1 = *(char *)(*param_2 + 4);
  if (cVar1 == '\x03') {
    func_0x00314198(param_1 + 0x24);
  }
  else {
    uVar12 = uRam003faf3c;
    if (((cVar1 != '\0') && (uVar12 = uRam003faf40, cVar1 != '\x01')) &&
       (uVar12 = uRam003faf44, cVar1 != '\x02')) {
      uVar12 = 0;
    }
    func_0x00408e24(param_1 + 0x24,uVar12);
  }
  iVar9 = *(int *)(param_1 + 0x10);
  if (*(short *)(iVar9 + 0x230) != 0) {
    *psVar4 = sVar3;
  }
  iVar7 = *param_2;
  if (*(char *)(iVar7 + 0x134) == '\0') {
    func_0x00314098(param_1 + 0x24);
  }
  else {
    if (*(char *)(iVar9 + 0xb) == '\0') {
      cVar1 = *(char *)(iVar7 + 0x135);
    }
    else {
      cVar1 = *(char *)(iVar9 + iRam003faf48);
    }
    func_0x00314108(param_1 + 0x24,*(undefined2 *)(iVar7 + 0x136),(int)cVar1);
  }
  func_0x00314034(param_1 + 0x24,uRam003faf4c);
  uVar12 = VectorSignedToFloat((int)*(short *)(*param_2 + 6),(byte)(in_fpscr >> 0x15) & 3);
  func_0x00314028(uVar12,param_1 + 0x24,(int)*(char *)(*param_2 + 5));
  func_0x00313f50(uRam003faf50,param_1 + 0x24);
  iVar9 = *param_2;
  fVar13 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 0x131),(byte)(in_fpscr >> 0x15) & 3)
  ;
  if (*(char *)(*(int *)(param_1 + 0x10) + 0xb) == '\0') {
    iVar7 = (int)*(char *)(iVar9 + 0x130);
  }
  else {
    iVar7 = 0;
  }
  func_0x00313ee4(fVar13 * fRam003faf54,param_1 + 0x24,iVar7,*(undefined2 *)(iVar9 + 0x132));
  uStack_18 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar12 = 0;
  uVar5 = (uint)*(ushort *)(param_1 + 0x30);
  if (uVar5 == uRam00313eb4) {
    uVar8 = *(ushort *)(param_1 + 0x32);
    if ((uVar8 & 0xf) != 0) {
      bVar10 = false;
      if (*(char *)(param_1 + 0x34) == '\0') {
        uVar8 = ~uVar8 & 0xf;
        bVar10 = uVar8 == 0;
      }
      bVar11 = false;
      if (bVar10) {
        uVar8 = (ushort)*(byte *)(param_1 + 0x35);
        bVar11 = uVar8 == 0;
      }
      if (!bVar11) goto LAB_00313dc8;
    }
  }
  else {
LAB_00313dc8:
    uVar8 = 0xf;
    uStack_18 = 0xf;
  }
  if (uVar5 == uRam00313eb4) {
    uVar8 = *(ushort *)(param_1 + 0x32);
  }
  if (uVar5 != uRam00313eb4 || (uVar8 & 0xf) != 0) {
    uVar14 = 0xf;
  }
  if (uVar5 != 0x6051) {
    if (uVar5 == uRam00313eb4) {
      bVar10 = *(char *)(param_1 + 0x36) != '\0';
      cVar1 = '\0';
      if (bVar10) {
        cVar1 = *(char *)(param_1 + 0x37);
      }
      if (bVar10 && cVar1 != '\0') goto LAB_00313e34;
    }
    if (uVar5 != uRam00313eb4) goto LAB_00313e40;
    bVar10 = *(char *)(param_1 + 0x36) == '\0';
    uVar8 = 0;
    if (!bVar10) {
      uVar8 = *(ushort *)(param_1 + 0x32);
    }
    if (bVar10 || (uVar8 & 0xf) == 0) goto LAB_00313e40;
  }
LAB_00313e34:
  uVar15 = 2;
LAB_00313e40:
  if (uVar5 == uRam00313eb4) {
    bVar10 = *(char *)(param_1 + 0x36) != '\0';
    cVar1 = '\0';
    if (bVar10) {
      cVar1 = *(char *)(param_1 + 0x37);
    }
    if (bVar10 && cVar1 != '\0') {
      uVar12 = 2;
    }
  }
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 8);
  *puVar6 = uStack_18;
  puVar6[1] = uRam00313eb8;
  puVar6[2] = uVar14;
  puVar6[3] = uVar15;
  puVar6[4] = uVar12;
  puVar6[5] = 0;
  *(undefined4 **)(*(int *)(param_1 + 0x24) + 8) = puVar6 + 6;
  return;
}
