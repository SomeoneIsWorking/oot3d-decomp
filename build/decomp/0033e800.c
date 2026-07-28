// OoT3D decomp @ 0033e800  name=FUN_0033e800  size=584

void FUN_0033e800(int param_1,undefined4 param_2,int param_3,int param_4,byte *param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_68 [48];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  bVar4 = *(char *)(param_1 + 0xd0) != '\0';
  iVar2 = 0;
  if (bVar4) {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (((bVar4 && iVar2 != 0) &&
      (fVar10 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84),
      (uint)fVar10 <= (uint)fRam0033ea48)) && ((int)fVar10 < iRam0033ea4c)) {
    func_0x00368944(param_1,param_3,param_4);
    fVar1 = fRam0033ea60;
    fVar6 = fRam0033ea50;
    uVar5 = in_fpscr & 0xfffffff | (uint)(fRam0033ea50 <= fVar10) << 0x1d;
    fVar7 = fRam0033ea50;
    if ((SUB41(uVar5 >> 0x1d,0)) && (fVar7 = fVar10, iRam0033ea54 < (int)fVar10)) {
      fVar7 = fRam0033ea58;
    }
    fVar10 = fRam0033ea60 - fVar7 * fRam0033ea5c;
    fVar7 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0xd0),(byte)(uVar5 >> 0x15) & 3);
    fStack_2c = fRam0033ea60 - fVar7 * fVar10 * fRam0033ea64;
    fStack_38 = fStack_2c;
    fStack_34 = fStack_2c;
    fStack_30 = fStack_2c;
    if (param_5 != (byte *)0x0) {
      fVar7 = (float)VectorUnsignedToFloat((uint)*param_5,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)param_5[1],(byte)(uVar5 >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat((uint)param_5[2],(byte)(uVar5 >> 0x15) & 3);
      fStack_38 = fVar7 * fRam0033ea64 * fStack_2c;
      fStack_34 = fVar8 * fRam0033ea64 * fStack_2c;
      fStack_30 = fVar9 * fRam0033ea64 * fStack_2c;
    }
    if ((int)fStack_2c < 0x3f800000) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x194) + 0x10);
      func_0x003688a8(iVar2,0,4,&fStack_38);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0xe) = 1;
      func_0x003687b4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x84),
                      *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x7c),auStack_68);
      func_0x003713fc(fVar6,uRam0033ea68,fVar6,auStack_68,1);
      if (param_4 != 0) {
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(uVar5 >> 0x15) & 3
                                          );
        func_0x003735e8(fVar6 * fRam0033ea6c,auStack_68,1);
      }
      fVar10 = *(float *)(param_1 + 0xcc) * fVar10;
      func_0x00371348(*(float *)(param_1 + 0x54) * fVar10,fVar1,*(float *)(param_1 + 0x5c) * fVar10,
                      auStack_68,1);
      func_0x003721e0(*(undefined4 *)(param_1 + 0x194),auStack_68);
      *(undefined1 *)(*(int *)(param_1 + 0x194) + 0xac) = 1;
      func_0x003687a8(*(undefined4 *)(param_1 + 0x194));
      func_0x0036879c();
      uVar3 = func_0x003687a8(*(undefined4 *)(param_1 + 0x194));
      func_0x00368704(*(undefined4 *)(iRam0033ea70 + param_3),uVar3);
      func_0x00372170(*(undefined4 *)(param_1 + 0x194),0);
    }
  }
  return;
}

