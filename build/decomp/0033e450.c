// OoT3D decomp @ 0033e450  name=FUN_0033e450  size=576

void FUN_0033e450(float param_1,float param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,undefined4 param_9)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_7c [48];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  iVar5 = param_5 + param_4 * 4;
  if (*(int *)(iVar5 + 0x17c) == 0) {
    iVar2 = 0;
    if (*(int *)(iRam0033e690 + param_6) != 0) {
      iVar2 = param_6 + 0x3a5c;
    }
    if (((*puRam0033e694 & 1) == 0) && (iVar3 = func_0x003679b4(puRam0033e694), iVar3 != 0)) {
      func_0x0036788c(iRam0033e698);
    }
    piVar6 = *(int **)(iRam0033e698 + 0x17c);
    piVar6[2] = *(int *)(param_5 + 0x178);
    uVar4 = func_0x00358ef8(iVar2 + 0x10,0x51);
    uVar4 = (**(code **)(*piVar6 + 8))(piVar6,uVar4,0);
    *(undefined4 *)(iVar5 + 0x17c) = uVar4;
    piVar6[2] = 0;
  }
  fVar1 = fRam0033e6a8;
  fVar7 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar7 * fRam0033e6a4;
  if (0x3f800000 < (int)(fVar7 * fRam0033e6a4)) {
    fVar8 = fRam0033e6a8;
  }
  fStack_4c = fRam0033e6a8 - fVar8 * param_1 * fRam0033e6ac;
  if ((int)fStack_4c < 0x3f800000) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x17c) + 0x10);
    fStack_48 = fStack_4c;
    fStack_44 = fStack_4c;
    fStack_40 = fStack_4c;
    func_0x003688a8(iVar2,0,4,&fStack_4c);
    *(undefined1 *)(*(int *)(iVar2 + 4) + 0xe) = 1;
    uVar4 = VectorSignedToFloat((int)*(char *)(param_7 + 8),(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorSignedToFloat((int)*(char *)(param_7 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)func_0x0033f114(uVar4,uVar9);
    fVar8 = fVar8 * fRam0033e6b0;
    fVar7 = (float)VectorSignedToFloat((int)*(char *)(param_7 + 9),(byte)(in_fpscr >> 0x15) & 3);
    param_3 = (fRam0033e6b8 - fVar7 * fRam0033e6b4) * param_3;
    if ((int)param_3 < 0x3f800000) {
      param_3 = fVar1;
    }
    func_0x00372224(auStack_7c,param_8);
    func_0x003713fc(uRam0033e6bc,uRam0033e6c0,uRam0033e6bc,auStack_7c,1);
    func_0x003735e8(fVar8,auStack_7c,1);
    func_0x00371348(param_2,fVar1,param_2 * param_3,auStack_7c,1);
    func_0x003721e0(*(undefined4 *)(iVar5 + 0x17c),auStack_7c);
    *(undefined1 *)(*(int *)(iVar5 + 0x17c) + 0xac) = 1;
    func_0x003687a8(*(undefined4 *)(iVar5 + 0x17c));
    func_0x0036879c();
    uVar4 = func_0x003687a8(*(undefined4 *)(iVar5 + 0x17c));
    func_0x00368704(*(undefined4 *)(iRam0033e6c4 + param_6),uVar4);
    func_0x00372170(*(undefined4 *)(iVar5 + 0x17c),0);
  }
  return;
}

